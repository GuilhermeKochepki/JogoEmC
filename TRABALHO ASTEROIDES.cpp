#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.c>
#include <time.h>
#include <ctype.h>
#include <locale.h> >

char tecla;

//-----------------------------------------------------------------------------
void jogar(){
char ch;
   system("cls");
   textcolor(3);
   textbackground(15);
   
   printf("   Escolha seu nível");
   ch=getch(); 
   textcolor(3);
   textbackground(0);
   system("cls");
}
//-----------------------------------------------------------------------------
void instrucoes(){
char ch;
   system("cls");
   textcolor(3);
   textbackground(15);
   
   
   gotoxy(5,5), printf("INSTRUÇÕES");
   gotoxy(5,7), printf("MOVIMENTAÇÕES");
   gotoxy(5,8), printf("W: Se movimenta para CIMA");
   gotoxy(5,9), printf("A: Se movimenta para ESQUERDA");
   gotoxy(5,10), printf("S: Se movimenta para BAIXO");
   gotoxy(5,11), printf("D: Se movimenta para DIREITA");
   
   gotoxy(5,13), printf("ATIRAR");
   gotoxy(5,14), printf("Backspace: Atira nos Objetos");
   
   gotoxy(5,16), printf("SAIR");
   gotoxy(5,17), printf("Esc: Sai do Jogo");
   
   ch=getch();
   textcolor(3);
   textbackground(0);
   system("cls");
}
//-----------------------------------------------------------------------------
void score(){

}
//-----------------------------------------------------------------------------
void creditos(){
char ch;
   system("cls");
   textcolor(3);
   textbackground(15);

   gotoxy(5,5), printf("Desenvolvido por: Guilherme Kochepki RA: 20065375-2");
   gotoxy(5,7), printf("Agradecimentos a: UniCesumar");
   gotoxy(5,8), printf("                  2ª Turma De ADS");
   gotoxy(5,9), printf("                  Professor Alexandre Moreno");
   
   ch=getch();
   textcolor(3);
   textbackground(0);
   system("cls");
}
//-----------------------------------------------------------------------------    
void telaInicio(){
  char opcoes[5][11]={"Jogar     ","Instruções","Score     ","Créditos  ","Fim       "};
  int x,opcao=0;
  bool sair=false;
  
  do{
  textcolor(3);
  textbackground(0); 

    gotoxy(5,1),printf("    /\\    / ____|__   __|  ____|  __ \\ / __ \\_   _|  __ \\ / ____|    \n"); 
    gotoxy(5,2),printf("   /  \\  | (___    | |  | |__  | |__) | |  | || | | |  | | (___         \n");   
    gotoxy(5,3),printf("  / /\\ \\  \\___ \\   | |  |  __| |  _  /| |  | || | | |  | |\\___ \\   \n");  
    gotoxy(5,4),printf(" / ____ \\ ____) |  | |  | |____| | \\ \\| |__| || |_| |__| |____) |     \n"); 
    gotoxy(5,5),printf("/_/    \\_\\_____/   |_|  |______|_|  \\_\\\\____/_____|_____/|_____/    \n");    
  
    gotoxy(25,7),printf("                 ____\n");
    gotoxy(25,8),printf("          .-'  p 8o  `-.\n");
    gotoxy(25,9),printf("       .-'8888P'Y.`Y[ ' `-.\n");
    gotoxy(25,10),printf("     ,']88888b.J8oo_      '`.\n");
    gotoxy(25,11),printf("   ,' ,88888888888[         Y`.\n");
    gotoxy(25,12),printf("  /   8888888888P            Y8\\\n");
    gotoxy(25,13),printf(" /    Y8888888P              ]88\\\n");
    gotoxy(25,14),printf(":      Y88    P              `888:\n");
    gotoxy(25,15),printf(":       Y8.oP                 Y88:\n");
    gotoxy(25,16),printf("|          `Yb  __             `'|\n");
    gotoxy(25,17),printf(":            ` d8888bo.          :\n");
    gotoxy(25,18),printf(":             d88888888ooo.      ;\n");
    gotoxy(25,19),printf(" \\            Y88888888888P     /\n");
    gotoxy(25,20),printf("  \\            `Y88888888P     /\n");
    gotoxy(25,21),printf("   `.            d88888P     ,'\n");
    gotoxy(25,22),printf("     `.          888PP     ,'\n");
    gotoxy(25,23),printf("       `-.      d8P     ,-'\n");
    gotoxy(25,24),printf("          `-.,,_'__,,.-'\n"); 

    for(x=0;x<5;x++)
       gotoxy(5,14+x), printf("%s",opcoes[x]);                 
    
    textbackground(15);
    textcolor(3);
    
    switch(opcao){
       case 0:
         gotoxy(5,14+opcao), printf("%s",opcoes[opcao]);
       break;
       case 1:
         gotoxy(5,14+opcao), printf("%s",opcoes[opcao]);    
       break;
       case 2:
         gotoxy(5,14+opcao), printf("%s",opcoes[opcao]); 
       break;
       case 3:
         gotoxy(5,14+opcao), printf("%s",opcoes[opcao]);
       break;
       case 4:
         gotoxy(5,14+opcao), printf("%s",opcoes[opcao]);
       break;
    }
    
    tecla=getch();
    if(tecla<0)
      tecla=getch();

    switch (tecla){
      case 72:
         if (opcao-1>=0)
          opcao--;
            else
          opcao=4;
        break;    
       case 80:
         if (opcao+1<=4)
          opcao++;
            else
          opcao=0;
        break;
      case 119:
        if (opcao-1>=0)
          opcao--;
            else
          opcao=4;
        break;
      case 115:
        if (opcao+1<=4)
          opcao++;
            else
          opcao=0;
        break;
      case 13: 
        if(opcao==0)
          jogar();
        if(opcao==1)
          instrucoes();
        if(opcao==2)
          score();
        if(opcao==3)
          creditos();
        if(opcao==4)
          sair=true;
        break;
    }
  }while(tecla!=27 && sair!=true);
}  
//-----------------------------------------------------------------------------   
int main(){
  setlocale(LC_ALL,"portuguese");
  
  CONSOLE_CURSOR_INFO cursor = {1, FALSE};
  SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
  
  telaInicio();
  
  gotoxy(5,25);
  system("pause");
  
  return(0);
}
