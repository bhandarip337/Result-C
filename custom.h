/*******************************************
 *              "custom.h"                 *
 *   custom.h is  my custom header file    *
 *******************************************
 *       Author:-Prashant Bhandari         *
 *******************************************/
#include<windows.h>

//function to clear console screen.
void clrscr()
{
    system("cls");	
}
//This function places cursor at a desired location on screen i.e., we can change cursor position using gotoxy function.
/*
                      5
                      |   [80]Columns
              *-------|-----------------------> (X-axis)     Example:-
              | *-----|-------------------*                          gotoxy(5,5);
              | |     |                   |                          printf("hello");
          5 --|-|-----*hello              |
         [25] | |     (5,5)               |                  Syntax:-
         Rows | |                         |                          gotoxy(x,y);
              | |     [output screen]     |
              | |                         |                  where,
              | |                         |                        x=x-coordinate
              | |                         |                        y=y-coordinate
              | |                         |
              | *-------------------------*
              |
              V 
    
          (Y-axis)
*/
void gotoxy(short x, short y)                                      
{
    COORD pos ={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//This function is used to print single line box in output screen.
/*
                   [80]Columns
                       x(5)  
                        |   
              *---------|---------------------> (X-axis)       Example:-    
              | *-------|-----------------*                             box_single_line(5,5,5,5);
              | |       | l(5)            |
              | |       |<----->          |
       y(5)---|-|-------┌──────┐          |                    Syntax:- 
              | |     ^ │      │          |                             box_single_line(x,y,l,w);
              | |     | │ box  │          |          
              | | w(5)| │      │          |
    [25]      | |     | │      │          |                    where,
    Rows      | |     V └──────┘          |                          x=x-coordinate
              | |    [output screen]      |                          y=y-coordinate
              | |                         |                          l=length
              | *-------------------------*                          w=width
              |
              V
           (Y-axis)
*/
void box_single_line(int x,int y,int l,int w)
{
	int h,i,j,k;
	gotoxy(x,y);printf("\xDA");
	gotoxy(l+x,y);printf("\xBF");
	gotoxy(l+x,w+y);printf("\xD9");
	gotoxy(x,y+w);printf("\xC0");
	for(h=x+1;h<l+x;h++)
	{
		gotoxy(h,y);printf("\xC4");
	}
	for(i=y+1;i<w+y;i++)
	{
		gotoxy(l+x,i);printf("\xB3");
	}
	for(j=x+1;j<l+x;j++)
	{
		gotoxy(j,y+w);printf("\xC4");
	}
	for(k=y+1;k<w+y;k++)
	{
		gotoxy(x,k);printf("\xB3");
	}	
	
}
//This function is same as above function but used to print double line box in output screen.
/*
                        [80]Columns
						    
              *-------------------------------> (X-axis)       Example:-    
              | *-------------------------*                             box_double_line(5,5,5,5);
              | |                         |
              | |                         |
              | |       ╔══════╗          |                    Syntax:- 
              | |       ║      ║          |                            box_double_line(x,y,l,w);
              | |       ║ box  ║          |
              | |       ║      ║          |                    where,
    [25]      | |       ║      ║          |                         x=x-coordinate
    Rows      | |       ╚══════╝          |                         y=y-coordinate
              | |     [output screen]     |                         l=length
              | |                         |                         w=width
              | *-------------------------*
              |
              V
           (Y-axis)
*/
void box_double_line(int x,int y,int l,int w)
{
	
	int h,i,j,k;
	gotoxy(x,y);printf("\xC9");
	gotoxy(l+x,y);printf("\xBB");
	gotoxy(l+x,w+y);printf("\xBC");
	gotoxy(x,y+w);printf("\xC8");
	for(h=x+1;h<l+x;h++)
	{
		gotoxy(h,y);printf("\xCD");
	}
	for(i=y+1;i<w+y;i++)
	{
		gotoxy(l+x,i);printf("\xBA");
	}
	for(j=x+1;j<l+x;j++)
	{
		gotoxy(j,y+w);printf("\xCD");
	}
	for(k=y+1;k<w+y;k++)
	{
		gotoxy(x,k);printf("\xBA");
	}	
}
//This function is also same as above function but used to print box made of block in output screen.
/*
                       [80]Columns
						    
              *-------------------------------> (X-axis)       Example:-    
              | *-------------------------*                             box_block(5,5,5,5);
              | |                         |
              | |                         |
              | |       ▄▄▄▄▄▄▄▄          |                    Syntax:- 
              | |       ▌      ▐          |                            box_block(x,y,l,w);
              | |       ▌ box  ▐          |
              | |       ▌      ▐          |
    [25]      | |       ▌      ▐          |                    where,
    Rows      | |       ▀▀▀▀▀▀▀▀          |                          x=x-coordinate
              | |    [output screen]      |                          y=y-coordinate
              | |                         |                          l=length
              | *-------------------------*                          w=width
              |
              V
           (Y-axis)
*/
void box_block(int x,int y,int l,int w)
{
	int h,i,j,k;
	gotoxy(x,y);printf("\xDC");
	gotoxy(l+x,y);printf("\xDC");
	gotoxy(l+x,w+y);printf("\xDF");
	gotoxy(x,y+w);printf("\xDF");
	for(h=x+1;h<l+x;h++)
	{
		gotoxy(h,y);printf("\xDC");
	}
	for(i=y+1;i<w+y;i++)
	{
		gotoxy(l+x,i);printf("\xDE");
	}
	for(j=x+1;j<l+x;j++)
	{
		gotoxy(j,y+w);printf("\xDF");
	}
	for(k=y+1;k<w+y;k++)
	{
		gotoxy(x,k);printf("\xDD");
	}	
	
}
/*
void printborder()
{
	int i,j,k,l;
	gotoxy(0,0);printf("\xC9");
	gotoxy(83,0);printf("\xBB");
	gotoxy(83,24);printf("\xBC");
	gotoxy(0,24);printf("\xC8");
	for(i=1;i<83;i++)
	{
		gotoxy(i,0);printf("\xCD");
	}
	for(j=1;j<24;j++)
	{
		gotoxy(83,j);printf("\xBA");
	}
	for(k=1;k<83;k++)
	{
		gotoxy(k,24);printf("\xCD");
	}
	for(l=1;l<24;l++)
	{
		gotoxy(0,l);printf("\xBA");
	}	
}*/
