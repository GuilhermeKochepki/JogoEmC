#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <time.h>
#include <ctype.h>
#include <locale.h>

int main(){
char tecla;
       printf("Direcione sua Nave (W,A,D ou Setas Direcionais)");    
       CONSOLE_CURSOR_INFO cursor = {1, FALSE};
       SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);          
       do{
                   
           tecla=getch();
           if (tecla<0)
              tecla=getch();
           
           if(tecla==119 || tecla==72){
               system("cls");
               gotoxy(5,6), printf("  ^   \n");
               gotoxy(5,7), printf(" | |  \n");
               gotoxy(5,8), printf("_|||_ \n");
               gotoxy(5,9), printf("  |   \n");
           }
           
           if(tecla==100 || tecla==77){
               system("cls");
               gotoxy(5,6), printf("|___  \n");
               gotoxy(5,7), printf("-___> \n");
               gotoxy(5,8), printf("|     \n");
           }
           
           if(tecla==97 || tecla==75){
               system("cls");
               gotoxy(5,6), printf(" ___| \n");
               gotoxy(5,7), printf("<___- \n");
               gotoxy(5,8), printf("    | \n");
           }
       }while(tecla!=27);
           
system("pause");
return 0;
}
