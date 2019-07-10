#ifndef INTERFACEMENU_H_INCLUDED
#define INTERFACEMENU_H_INCLUDED
#include <iostream>
#include <conio2.h>
#include "interface.h"
#include "funcoes.h"
using namespace std;

void cadastrar();
void ufs();
void RealizarVenda();
void venda();
void consulta();

void menu()
{
    int opc;
    telaVerde();
    gotoxy(42,5);
    textcolor(WHITE);
    cout << "SEJA BEM VINDO A FARMA UFS\n";
    gotoxy(25,14);
    textbackground(LIGHTRED);
    textcolor(WHITE);
    cout << " 1 - CADASTRAR PRODUTOS ";

    gotoxy(25,16);
    textbackground(LIGHTRED);
    textcolor(WHITE);
    cout << " 2 - BUSCAR PRODUTOS ";

    gotoxy(25,18);
    textbackground(LIGHTRED);
    textcolor(WHITE);
    cout << " 3 - REALIZAR VENDA ";

    gotoxy(25,20);
    textbackground(LIGHTRED);
    textcolor(WHITE);
    cout << " 4 - ENCERRAR O SISTEMA ";

    for (int i = 0; i < 5; i++)
    {
        gotoxy(25+i,22);
        textbackground(LIGHTRED);
        cout << '\0';
    }
    gotoxy(27,22);
    cin >> opc;

    switch(opc)
    {
        case 1:
            gotoxy(25,14);
            textbackground(RED);
            textcolor(WHITE);
            cout << " 1 - CADASTRAR PRODUTOS ";
            Sleep(800);
            cadastrar();
            break;
        case 2:
            gotoxy(25,16);
            textbackground(RED);
            textcolor(WHITE);
            cout << " 2 - BUSCAR PRODUTOS ";
            Sleep(800);
            consulta();
            break;
        case 3:
            gotoxy(25,18);
            textbackground(RED);
            textcolor(WHITE);
            cout << " 3 - REALIZAR VENDA ";
            Sleep(800);
            RealizarVenda();
            break;
        case 4:
            gotoxy(25,20);
            textbackground(RED);
            textcolor(WHITE);
            cout << " 4 - ENCERRAR O SISTEMA ";
            Sleep(800);
            telaVerde();
            ufs();
            break;
        default:
            break;
    }
    exit(0);

}



#endif // INTERFACEMENU_H_INCLUDED
