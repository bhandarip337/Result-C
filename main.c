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

#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <windows.h> 
#include "drawing.h"
#include "result.h"
int main()
{
	char *nme="Prashant Bhandari";
	system("color 0C");
	banner();
	loading();
	printtable(nme,21,10,'B',20,35,45,55,65,120,700);
	getch();
	return (0);
}
