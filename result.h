/*******************************************
 *              "result.h"                 *
 *     result.h is a custom header file    *
 *     which contians some user defined    *
 *  functions made for use in this project *
 *******************************************
 *       Author:-Prashant Bhandari         *
 *******************************************/
void banner()
{
	box_double_line(0,0,83,24);
	box_block(12,1,55,13);
	gotoxy(15,2);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	gotoxy(15,3);printf("\xB1 ######  #######  #####  #     # #     ####### \xB1\n");
	gotoxy(15,4);printf("\xB1 #     # #       #     # #     # #        #    \xB1\n");
	gotoxy(15,5);printf("\xB1 #     # #       #       #     # #        #    \xB1\n");
	gotoxy(15,6);printf("\xB1 ######  #####    #####  #     # #        #    \xB1\n");
	gotoxy(15,7);printf("\xB1 #  #    #             # #     # #        #    \xB1\n");
	gotoxy(15,8);printf("\xB1 #   #   #       #     # #     # #        #    \xB1\n");
	gotoxy(15,9);printf("\xB1 #    #  #######  #####   #####  #######  #    \xB1\n");
	gotoxy(15,10);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 CALCULATOR \xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n");
	gotoxy(25,12);printf("Enter any key to Continue.... ");
	getch();
}
void loading()
{
	clrscr();
	gotoxy(35,14);printf("LOADING...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1 [10%%]");
	Sleep(1000);
	clrscr();
	gotoxy(35,14);printf("LOADING...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [20%%]");
	Sleep(1000);
	clrscr();
	gotoxy(35,14);printf("PLEASE WAIT...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [35%%]");
	Sleep(1000);
	clrscr();
	gotoxy(35,14);printf("PLEASE WAIT...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [50%%]");
	Sleep(1000);
	clrscr();
	gotoxy(35,14);printf("OPENING...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [90%%]");
	Sleep(1000);
	clrscr();
	gotoxy(35,14);printf("OPENING...");
	gotoxy(20,15);printf("\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1 [100%%]");
	Sleep(1000);
	clrscr();
}
void printtable(int m1,int m2,int m3, int m4,int m5,int t,int p)
{
	box_block(1,0,81,24);
	gotoxy(4,9);printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCB\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	gotoxy(4,10);printf("\xBA   SUBJECTS  \xBA    FULL MARKS    \xBA  PASS MARKS     \xBA   MARKS OBTAINED     \xBA");
	gotoxy(4,11);printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCE\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9");
	gotoxy(4,12);printf("\xBA English     \xBA");
	gotoxy(4,13);printf("\xBA Nepali      \xBA");
	gotoxy(4,14);printf("\xBA Maths       \xBA");
	gotoxy(4,15);printf("\xBA Science     \xBA");
	gotoxy(4,16);printf("\xBA Opt.Maths   \xBA");
	gotoxy(27,12);printf("100       \xBA      35         \xBA         %d",m1);
	gotoxy(27,13);printf("100       \xBA      35         \xBA         %d",m2);
	gotoxy(27,14);printf("100       \xBA      35         \xBA         %d",m3);
	gotoxy(27,15);printf("100       \xBA      35         \xBA         %d",m4);
	gotoxy(27,16);printf("100       \xBA      35         \xBA         %d",m3);
	gotoxy(78,12);printf("\xBA");
	gotoxy(78,13);printf("\xBA");
	gotoxy(78,14);printf("\xBA");
	gotoxy(78,15);printf("\xBA");
	gotoxy(78,16);printf("\xBA");
	gotoxy(4,17);printf("\xCC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCA\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xB9");
	gotoxy(4,18);printf("\xBATotal Marks:%d",t);
	gotoxy(4,19);printf("\xBAPercentage:%d",p);
	gotoxy(78,18);printf("\xBA");
	gotoxy(78,19);printf("\xBA");
	gotoxy(4,20);printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
}