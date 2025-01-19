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
	int gd=DETECT, gm, mx=0, my=0, idx=0;
	linear_object l1, l2;
	surface surf;

	initgraph(&gd,&gm,"../..");
	Mcontrol::init();
	Mcontrol::hide();

	while(mx!=-20) puts(""), --mx;
	if(1/* Demo but sexuality(non) */) {
		mx=367, my=479;
		for (idx=-16; idx<18; ++idx) {
			l1.setter(idx*20+(6-idx)*7,idx+abs(6-idx)*7-150,idx,idx+30);
			l2.setter(idx*20,idx+20+abs(6-idx)*7-150,idx,idx+30);

			surf.setl01(l1, l2);
			surf.display(mx, my);
		}
	}
	setfillstyle(2,RED);
	circle(220,70,100);
	floodfill(200,70,WHITE);
	setfillstyle(1,CYAN);
	floodfill(0,0,WHITE);
	setfillstyle(1,LIGHTCYAN);
	floodfill(639,0,WHITE);
	setfillstyle(1,DARKGRAY);
	floodfill(639,479,WHITE);
	getch();
	closegraph();
	return ;
}