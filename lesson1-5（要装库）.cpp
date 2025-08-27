#include "egegraphics.h"  /*额但这个库我没有安装*/

int main()
{
	int width=900, height=600;
	initgraph(width, height, !INIT_WITHLOGO);
	circle(width/2, height/2, 200);
	getch();
	closegraph();
	return 0;
}