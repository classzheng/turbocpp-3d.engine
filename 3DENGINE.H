/*******************************************************
 * @project:   Enter the title.                        *
 * @author:    Enter the author                        *
 * @brief:     Enter the brief                         *
 * @date:      20**.*.**                               *
 * @basemodel: Something with 3-D                      *
 * @releaseud: ______ License Y                      *
 *******************************************************/
/* Include Header files- *//////////////////////////////
#include <Iostream.H>                                 //
#include <Graphics.H>                                 //
#include <Conio.H>                                    //
#include <Math.H>                                     //
#include <Dos.H>                                      //
#include <Time.H>                                     //
#include <Alloc.H>                                    //
#include <Limits.H>                                   //
#include <Stdio.H>                                    //
#include <Stdlib.H>                                   //
#include <String.H>                                   //
#include <Stdarg.H>                                   //

class Mcontrol {
 /* Static methods */ public:
	static void init (void) {
		union REGS reg;
		reg.x.ax=0;
		int86(0x33,&reg,&reg);
		reg.x.ax=1;
		int86(0x33,&reg,&reg);
		return ;
	}

 /* Static methods */ public:
	static void show (void) {
		union REGS reg;
		reg.x.ax=1;
		int86(0x33,&reg,&reg);
		return ;
	}

 /* Static methods */ public:
	static void hide (void) {
		union REGS reg;
		reg.x.ax=2;
		int86(0x33,&reg,&reg);
		return ;
	}

 /* Static methods */ public:
	static void getxy(int* x,int* y) {
		union REGS reg;
		reg.x.ax=3;
		int86(0x33,&reg,&reg);
		*x=reg.x.cx,*y=reg.x.dx;
		return ;
	}

};

float originx, originy ;
void pawrender(float x, float y) {
	originx=x, originy=y;

 setcolor(RED);
	line(x,y,x,480-y);
 setcolor(BLUE);
	line(x,y,640-x,y);
 setcolor(GREEN);
	line(x,y,320-x,240-y);
 setcolor(YELLOW);
	line(x+20,y-10,320-x,480-y);
	line(x-60,y+20,320-x,480-y+60);
	return ;
}
void createpixel(float x, float y, float z) {
 setcolor(WHITE);
	bar(originx+x, originy+y, originx+x+20, originy+y+20);
	return ;
}