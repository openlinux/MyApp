/**
  *	A full framebufer implementation under linux fb.
  *   Maintainer:  Wu DaoGuang.
  *	Email: wdgvip@gmail.com.
  *	2010-12-16.
**/

/* Public Use Functions:
 *
 * extern void fb_display(unsigned char *rgbbuff,
 *     int x_size, int y_size,
 *     int x_pan, int y_pan,
 *     int x_offs, int y_offs);
 *
 * extern void getCurrentRes(int *x,int *y);
 *
 */

include "../Common/includes.h"










Fb::Fb()
{
	
}
Fb::~Fb()
{

}
Fb::Init()
{
	fb_dev = -1;
}

Fb::Release()
{
}
bool FB::OpenFB(const char *name)
{

    char *dev;

    if(name == NULL){
	dev = getenv("FRAMEBUFFER");
	if(dev) name = dev;
	else name = DEFAULT_FRAMEBUFFER;
    }
    
    if ((fb_dev = open(name, O_WRONLY)) == -1){
        fprintf(stderr, "open %s: %s\n", name, strerror(errno));
	exit(1);
    }
    return true;

}

bool Fb::CloseFb(int fh)
{
	if(fb_dev  != -1)
		{
			 close(fh);
			 fb_dev = -1;
			 return true;
		}
	return false;	
}




void Fb::getVarScreenInfo(int fh, struct fb_var_screeninfo *var)
{
    fh = fb_dev;
	
    if (ioctl(fh, FBIOGET_VSCREENINFO, var)){
        fprintf(stderr, "ioctl FBIOGET_VSCREENINFO: %s\n", strerror(errno));
	exit(1);
    }
}


void Fb::setVarScreenInfo(int fh, struct fb_var_screeninfo * var)
{
	fb = fb_dev;

	if (ioctl(fh, FBIOPUT_VSCREENINFO, var)){
        fprintf(stderr, "ioctl FBIOPUT_VSCREENINFO: %s\n", strerror(errno));
	exit(1);
       }		
}

void Fb::getFixScreenInfo(int fh, struct fb_fix_screeninfo * var)
{
	fh = fb_dev;

	 if (ioctl(fh, FBIOGET_FSCREENINFO, fix)){
        fprintf(stderr, "ioctl FBIOGET_FSCREENINFO: %s\n", strerror(errno));
	exit(1);
    }
}

void Fb::make332map(struct fb_cmap * map)
{
	int rs, gs, bs, i;
	int r = 8, g = 8, b = 4;

	map->red = red;
	map->green = green;
	map->blue = blue;

	rs = 256 / (r - 1);
	gs = 256 / (g - 1);
	bs = 256 / (b - 1);
	
	for (i = 0; i < 256; i++) {
		map->red[i]   = (rs * ((i / (g * b)) % r)) * 255;
		map->green[i] = (gs * ((i / b) % g)) * 255;
		map->blue[i]  = (bs * ((i) % b)) * 255;
	}

}

void Fb::set8map(int fh, struct fb_cmap * map)
{
	fh = fb_dev;
	 if (ioctl(fh, FBIOPUTCMAP, map) < 0) {
        fprintf(stderr, "Error putting colormap");
        exit(1);
    }
}


void Fb::set332map(int fh)
{
   fh = fb_dev;
   struct fb_cmap   map332 = {0, 256, red, green, blue, NULL};

    make332map(&map332);
    set8map(fh, &map332);
}


void Fb::get8map(int fh, struct fb_cmap * map)
{
	fh = fb_dev;
	 if (ioctl(fh, FBIOGETCMAP, map) < 0) {
        fprintf(stderr, "Error getting colormap");
        exit(1);
    }
}



inline unsigned char Fb::make8color(unsigned char r, unsigned char g, unsigned char b)
{
    return (
	(((r >> 5) & 7) << 5) |
	(((g >> 5) & 7) << 2) |
	 ((b >> 6) & 3)       );
}

inline unsigned short Fb::make15color(unsigned char r, unsigned char g, unsigned char b)
{
    return (
	(((r >> 3) & 31) << 10) |
	(((g >> 3) & 31) << 5)  |
	 ((b >> 3) & 31)        );
}

inline unsigned short Fb::make16color(unsigned char r, unsigned char g, unsigned char b)
{
	return (
	(((r >> 3) & 31) << 11) |
	(((g >> 2) & 63) << 5)  |
	 ((b >> 3) & 31)        );
}



void * Fb::convertRGB2FB(int fh, unsigned char * rgbbuff, unsigned long count, int bpp, int * cpp)
{
	fh = fb_dev;
     unsigned long i;
    void *fbbuff = NULL;
    unsigned char *c_fbbuff;
    unsigned short *s_fbbuff;
    unsigned int *i_fbbuff;

    switch(bpp)
    {
	case 8:
	    *cpp = 1;
	    c_fbbuff = (unsigned char *) malloc(count * sizeof(unsigned char));
	    for(i = 0; i < count; i++)
		c_fbbuff[i] = make8color(rgbbuff[i*3], rgbbuff[i*3+1], rgbbuff[i*3+2]);
	    fbbuff = (void *) c_fbbuff;
	    break;
	case 15:
	    *cpp = 2;
	    s_fbbuff = (unsigned short *) malloc(count * sizeof(unsigned short));
	    for(i = 0; i < count ; i++)
		s_fbbuff[i] = make15color(rgbbuff[i*3], rgbbuff[i*3+1], rgbbuff[i*3+2]);
	    fbbuff = (void *) s_fbbuff;
	    break;
	case 16:
	    *cpp = 2;
	    s_fbbuff = (unsigned short *) malloc(count * sizeof(unsigned short));
	    for(i = 0; i < count ; i++)
		s_fbbuff[i] = make16color(rgbbuff[i*3], rgbbuff[i*3+1], rgbbuff[i*3+2]);
	    fbbuff = (void *) s_fbbuff;
	    break;
	case 24:
	case 32:
	    *cpp = 4;
	    i_fbbuff = (unsigned int *) malloc(count * sizeof(unsigned int));
	    for(i = 0; i < count ; i++)
		i_fbbuff[i] = ((rgbbuff[i*3] << 16) & 0xFF0000) |
			    ((rgbbuff[i*3+1] << 8) & 0xFF00) |
			    (rgbbuff[i*3+2] & 0xFF);
	    fbbuff = (void *) i_fbbuff;
	    break;
	default:
	    fprintf(stderr, "Unsupported video mode! You've got: %dbpp\n", bpp);
	    exit(1);
    }
    return fbbuff;

}

void Fb::blit2FB(int fh, void * fbbuff, 
	unsigned int pic_xs, unsigned int pic_ys, 
	unsigned int scr_xs, unsigned int scr_ys, 
	unsigned int xp, unsigned int yp, unsigned 
	int xoffs, unsigned int yoffs, 
	int cpp)
{
	fh = fb_dev;
	int i, xc, yc;

    struct fb_cmap map_back = {0, 256, red_b, green_b, blue_b, NULL};
	
    unsigned char *cp; unsigned short *sp; unsigned int *ip;
    cp = (unsigned char *) sp = (unsigned short *) ip = (unsigned int *) fbbuff;

    xc = (pic_xs > scr_xs) ? scr_xs : pic_xs;
    yc = (pic_ys > scr_ys) ? scr_ys : pic_ys;
    
    switch(cpp){
	case 1:
	    get8map(fh, &map_back);
	    set332map(fh);
	    for(i = 0; i < yc; i++){
		lseek(fh, ((i+yoffs)*scr_xs+xoffs)*cpp, SEEK_SET);
		write(fh, cp + (i+yp)*pic_xs+xp, xc*cpp);
	    }
	    set8map(fh, &map_back);
	    break;
	case 2:
	    for(i = 0; i < yc; i++){
		lseek(fh, ((i+yoffs)*scr_xs+xoffs)*cpp, SEEK_SET);
		write(fh, sp + (i+yp)*pic_xs+xp, xc*cpp);
	    }
	    break;
	case 4:
	    for(i = 0; i < yc; i++){
		lseek(fh, ((i+yoffs)*scr_xs+xoffs)*cpp, SEEK_SET);
		write(fh, ip + (i+yp)*pic_xs+xp, xc*cpp);
	    }
	    break;
    }
}



void Fb::fb_display(unsigned char *rgbbuff, int x_size, int y_size, int x_pan, int y_pan, int x_offs, int y_offs)
{
    struct fb_var_screeninfo var;
    unsigned short *fbbuff = NULL;
    int fh = -1, bp = 0;
    
    /* get the framebuffer device handle */
    fh = openFB(NULL);
    
    /* read current video mode */
    getVarScreenInfo(fh, &var);
    
    /* correct panning */
    if(x_pan > x_size - var.xres) x_pan = 0;
    if(y_pan > y_size - var.yres) y_pan = 0;
    /* correct offset */
    if(x_offs + x_size > var.xres) x_offs = 0;
    if(y_offs + y_size > var.yres) y_offs = 0;
    
    /* blit buffer 2 fb */
    fbbuff = convertRGB2FB(fh, rgbbuff, x_size * y_size, var.bits_per_pixel, &bp);
    blit2FB(fh, fbbuff, x_size, y_size, var.xres, var.yres, x_pan, y_pan, x_offs, y_offs, bp);
    free(fbbuff);
    
    /* close device */
    closeFB(fh);
}

void Fb::getCurrentRes(int *x, int *y)
{
    struct fb_var_screeninfo var;
    int fh = -1;
    fh = openFB(NULL);
    getVarScreenInfo(fh, &var);
    *x = var.xres;
    *y = var.yres;
    closeFB(fh);
}




























