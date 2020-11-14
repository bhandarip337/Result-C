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
//This function places cursor at a desired location on screen i.e., we can change cursor position using gotoxy function
/*
                         [80]Columns
              *-------------------------------> (X-axis)
              | *-------------------------*
              | |                         |
              | |                         |
         [25] | |      output screen      |
         Rows | |                         |
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
void box_single_line(int x,int y,int a,int b)
{
	int i,j,k,l;
	gotoxy(x,y);printf("\xDA");
	gotoxy(a+x,y);printf("\xBF");
	gotoxy(a+x,b+y);printf("\xD9");
	gotoxy(x,y+b);printf("\xC0");
	for(i=x+1;i<a+x;i++)
	{
		gotoxy(i,y);printf("\xC4");
	}
	for(j=y+1;j<b+y;j++)
	{
		gotoxy(a+x,j);printf("\xB3");
	}
	for(k=x+1;k<x+a;k++)
	{
		gotoxy(k,y+b);printf("\xC4");
	}
	for(l=y+1;l<b+y;l++)
	{
		gotoxy(x,l);printf("\xB3");
	}	
	
}
void box_double_line(int x,int y,int a,int b)
{
	
	int i,j,k,l;
	gotoxy(x,y);printf("\xC9");
	gotoxy(a+x,y);printf("\xBB");
	gotoxy(a+x,b+y);printf("\xBC");
	gotoxy(x,y+b);printf("\xC8");
	for(i=x+1;i<a+x;i++)
	{
		gotoxy(i,y);printf("\xCD");
	}
	for(j=y+1;j<b+y;j++)
	{
		gotoxy(a+x,j);printf("\xBA");
	}
	for(k=x+1;k<x+a;k++)
	{
		gotoxy(k,y+b);printf("\xCD");
	}
	for(l=y+1;l<b+y;l++)
	{
		gotoxy(x,l);printf("\xBA");
	}	
	
}
void box_block(int x,int y,int a,int b)
{
	int i,j,k,l;
	gotoxy(x,y);printf("\xDC");
	gotoxy(a+x,y);printf("\xDC");
	gotoxy(a+x,b+y);printf("\xDF");
	gotoxy(x,y+b);printf("\xDF");
	for(i=x+1;i<a+x;i++)
	{
		gotoxy(i,y);printf("\xDC");
	}
	for(j=y+1;j<b+y;j++)
	{
		gotoxy(a+x,j);printf("\xDE");
	}
	for(k=x+1;k<x+a;k++)
	{
		gotoxy(k,y+b);printf("\xDF");
	}
	for(l=y+1;l<b+y;l++)
	{
		gotoxy(x,l);printf("\xDD");
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