/*******************************************
 *      , ; ,   .-'"""'-.   , ; ,          *
 *      \\|/  .'         '.  \|//          *
 *       \-;-/  (*)  (*)   \-;-/           *
 *       // ;               ; \\           *
 *      //__; :.         .; ;__\\          * 
 *     `-----\'.'-.....-'.'/-----'         *
 *            '.'.-.-,_.'.'                *
 *              '(  (..-'                  *
 *                '-'                      *
 *   This program is written for fun       *
 *******************************************   
 *      Author:-Prashant Bhandari          *
 *******************************************/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"custom.h"
#include"result.h"
int  main()
{
	char *nme="Prashant Bhandari";
	system("color 0C");
	banner();
	loading();
	printtable(nme,21,20,35,45,55,65,120,70);
	getch();
	return (0);
}