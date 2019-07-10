#ifndef INTERFACE_H_INCLUDED
#define INTERFACE_H_INCLUDED
#include <iostream>
#include <conio2.h>
using namespace std;
//letra f da palavra farma
void letraF()
{

    for(int i=0; i<10; i++)
    {
        gotoxy(12+i,4);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
    cout << "\n";
    //barra lateral da letra f
    for(int i=0; i<7; i++)
    {
        gotoxy(12,5+i);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdb\n");
    }

    for(int i=0; i<8; i++)
    {
        gotoxy(13+i,7);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
}

void letraA()
{
    for (int i = 0; i <7; i++)
    {
        gotoxy(25,5+i);
        printf("\xdb\n");
        gotoxy(34,5+i);
        printf("\xdb\n");
    }
    for(int i=0; i<10; i++)
    {
        gotoxy(25+i,4);
        printf("\xdc");
    }
    for(int i=0; i<8; i++)
    {
        gotoxy(26+i,7);
        printf("\xdc");
    }

}

void letraR ()
{
    for(int i=0; i<10; i++)
    {
        gotoxy(38+i,4);
        printf("\xdc");
    }
    for (int i = 0; i <7; i++)
    {
        gotoxy(38,5+i);
        printf("\xdb\n");
    }
    for (int i = 0; i <3; i++)
    {
        gotoxy(47,5+i);
        printf("\xdb\n");
    }
    for(int i=0; i<8; i++)
    {
        gotoxy(39+i,7);
        printf("\xdc");
    }
    for (int i =0; i <4; i++)
    {
        gotoxy(40+i,8+i);
        printf("\xdb\n");
    }
}

void letraM()
{
    for(int i=0; i<8; i++)
    {
        gotoxy(52,4+i);
        printf("\xdb\n");
        gotoxy(63,4+i);
        printf("\xdb\n");
    }
    for(int i=0; i<5; i++)
    {
        gotoxy(53+i,4+i);
        printf("\xdb\n");
        gotoxy(58+i,8-i);
        printf("\xdb\n");
    }
}
void letraA2()
{
    for (int i = 0; i <7; i++)
    {
        gotoxy(68,5+i);
        printf("\xdb\n");
        gotoxy(77,5+i);
        printf("\xdb\n");
    }
    for(int i=0; i<10; i++)
    {
        gotoxy(68+i,4);
        printf("\xdc");
    }
    for(int i=0; i<8; i++)
    {
        gotoxy(69+i,7);
        printf("\xdc");
    }

}
void letraU()
{
    for(int i=0; i<8; i++)
    {
        gotoxy(38,14+i);
        printf("\xdb\n");
        gotoxy(39+i,21);
        printf("\xdc");
        gotoxy(47,14+i);
        printf("\xdb\n");
    }

}

void letraF2()
{

    for(int i=0; i<11; i++)
    {
        gotoxy(52+i,14);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
    cout << "\n";
    //barra lateral da letra f
    for(int i=0; i<7; i++)
    {
        gotoxy(52,15+i);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdb\n");
    }

    for(int i=0; i<9; i++)
    {
        gotoxy(53+i,17);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
}

void letraS()
{
    for(int i=0; i<11; i++)
    {
        gotoxy(69+i,14);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
    for(int i=0; i<3; i++)
    {
        gotoxy(69,15+i);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdb\n");

        gotoxy(79,18+i);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdb\n");
    }
    for(int i=0; i<10; i++)
    {
        gotoxy(70+i,17);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");



        gotoxy(69+i,20);
        textbackground(LIGHTRED);
        textcolor(WHITE);
        printf("\xdc");
    }
}

void telaAzul()
{
    //linha superior
    gotoxy(3,2);
    for(int i=0; i<113; i++)
    {
        textbackground(BLUE);
        textcolor(WHITE);
        printf("\xdc");
    }

    //linha lateral direito
    for(int i=0; i<25; i++)
    {
        gotoxy(3,3+i);
        textcolor(WHITE);
        printf("\xdb\n");
    }
    //linha lateral esquerdo
    for(int i=0; i<25; i++)
    {
        gotoxy(115,3+i);
        textcolor(WHITE);
        printf("\xdb\n");
    }
    //linha de baixo
    gotoxy(4,27);
    for(int i=0; i<111; i++)
    {
        textbackground(BLUE);
        textcolor(WHITE);
        printf("\xdc");
    }
    //cor de fundo
    for(int i=0; i<24; i++)
    {
        for(int j=0; j<111; j++)
        {
            gotoxy(4+j,3+i);
            textbackground(BLUE);
            textcolor(BLUE);
            printf("\xdb");
        }
    }
};

void telaVerde()
{
    //linha superior
    gotoxy(3,2);
    for(int i=0; i<113; i++)
    {
        textbackground(GREEN);
        textcolor(WHITE);
        printf("\xdc");
    }

    //linha lateral direito
    for(int i=0; i<25; i++)
    {
        gotoxy(3,3+i);
        textcolor(WHITE);
        printf("\xdb\n");
    }
    //linha lateral esquerdo
    for(int i=0; i<25; i++)
    {
        gotoxy(115,3+i);
        textcolor(WHITE);
        printf("\xdb\n");
    }
    //linha de baixo
    gotoxy(4,27);
    for(int i=0; i<111; i++)
    {
        textbackground(GREEN);
        textcolor(WHITE);
        printf("\xdc");
    }
    //cor de fundo
    for(int i=0; i<24; i++)
    {
        for(int j=0; j<111; j++)
        {
            gotoxy(4+j,3+i);
            textbackground(GREEN);
            textcolor(GREEN);
            printf("\xdb");
        }
    }
}

void logo()
{
    telaVerde();
    letraF();
    letraA();
    letraR();
    letraM();
    letraA2();
    letraU();
    letraF2();
    letraS();
    Sleep(800);
}

void ufs()
{
    textcolor(WHITE);
    gotoxy(10,8);
    printf("                     _______  _______     ______   _______ _________");
    gotoxy(10,9);
    printf("           |\\     /|(  ____ \\(  ____ \\   (  __  \\ (  ____ \\\\__   __/");
    gotoxy(10,10);
    printf("           | )   ( || (    \\/| (    \\/   | (  \\  )| (    \\/   ) (");
    gotoxy(10,11);
    printf("           | |   | || (__    | (_____    | |   ) || (_____    | |");
    gotoxy(10,12);
    printf("           | |   | ||  __)   (_____  )   | |   | |(_____  )   | |");
    gotoxy(10,13);
    printf("           | |   | || (            ) |   | |   ) |      ) |   | |");
    gotoxy(10,14);
    printf("           | (___) || )      /\\____) | _ | (__/  )/\\____) |___) (___");
    gotoxy(10,15);
    printf("           (_______)|/       \\_______)(_)(______/ \\_______)\\_______/");
    getch();

    for(int i=0; i<12; i++)
    {
        printf("\n");
    }
}
#endif
