#include "egegraphics.h"  /*��������û�а�װ*/

int main()
{
	int width=900, height=600;
	initgraph(width, height, !INIT_WITHLOGO);
	circle(width/2, height/2, 200);
	getch();
	closegraph();
	return 0;
}