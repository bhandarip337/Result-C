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
