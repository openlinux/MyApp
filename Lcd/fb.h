/**
  *	A full framebufer implementation under linux fb.
  *   Maintainer:  Wu DaoGuang.
  *	Email: wdgvip@gmail.com.
  *	2010-12-16.
**/


#ifndef _FB_H_
#define _FB_H_



class Fb
{
public:
	Fb();
	virtual ~Fb();
	int Init();
	int Release();
	bool OpenFb(const char *name);
	bool CloseFb(int fh);	
	void getVarScreenInfo(int fh, struct fb_var_screeninfo *var);
	void setVarScreenInfo(int fh, struct fb_var_screeninfo *var);
	void getFixScreenInfo(int fh, struct fb_fix_screeninfo *var);
	void make332map(struct fb_cmap *map);
	void set8map(int fh, struct fb_cmap *map);
	void set332map(int fh);
	void get8map(int fh, struct fb_cmap *map);
	void getCurrentRes(int * x, int * y);
	inline unsigned short make8color(unsigned char r, unsigned char g, unsigned char b);
	inline unsigned short make15color(unsigned char r, unsigned char g, unsigned char b);
	inline unsigned short make16color(unsigned char r, unsigned char g, unsigned char b);
	void *convertRGB2FB(int fh, unsigned char *rgbbuff, unsigned long count, int bpp, int *cpp);
	void blit2FB(int fh, void *fbbuff, unsigned int pic_xs, unsigned int pic_ys,unsigned int scr_xs, 
				unsigned int scr_ys, unsigned int xp, unsigned int yp, unsigned int xoffs,
				unsigned int yoffs, int cpp);

	void fb_display(unsigned char *rgbbuff, int x_size, int y_size, int x_pan, int y_pan,
				int x_offs, int y_offs);
	
	
protected:
	
	
private:
	int fb_dev;
	
	INT16U red[256];
	INT16U green[256];
	INT16U blue[256];
	INT16U red_b[256];
	INT16U green_b[256];
	INT16U blue_b[256];
	
};

#endif














