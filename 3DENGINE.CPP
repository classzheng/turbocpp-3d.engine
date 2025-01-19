/*******************************************************
 * @project:   Enter the title.                        *
 * @author:    Enter the author.                       *
 * @brief:     Enter the brief.                        *
 * @date:      20**.*.**                               *
 * @basemodel: Something with 3-D                      *
 * @releaseud: ______ License Y                      *
 *******************************************************/
#include "3DEngine.h"
void main(void) {
	int gd=DETECT, gm, mx=0, my=0;
	initgraph(&gd,&gm,"../..");
	Mcontrol::init();
	Mcontrol::hide();
	while(mx!=-20) puts(""), --mx;
	while(!kbhit()) {
		Mcontrol::getxy(&mx,&my);
		pawrender(mx,my);
		createpixel(mx+7,my-3,my);
		printf("%d,%d\n",mx,my);
		delay(30);
		cleardevice();
	}
	closegraph();
	return ;
}