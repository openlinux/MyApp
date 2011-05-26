#include <QApplication>
#include <QLabel>
#include <QtGui>

int main(int argc, char *argv[])
{
	
	QApplication app(argc, argv);
	QLabel *label = new QLabel("hello Qt !吴道广");
	label->resize(200,150);
	label->show();
	return app.exec();
}
