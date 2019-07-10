#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED
#include <conio2.h>
#include <cstring>
#include <ctype.h>
#include <stdlib.h>
#include "interface.h"
#include "menu.h"
using namespace std;

void pagamento(float& preco_venda);
void valorTroco(float recebido,float& preco, float& troco);

const char senha[] = "farmaAdmin";
char nome();
int quant,m=0,k=0,busca_lote,j=0;
float preco_venda = 0.0;
char gerente[10],nova_compra,nomebusca[20];

struct cadastro_produto
{
    char nome[20];
    int lote;
    float preco;
    int quantidade;
};

struct cadastro_produto cadastro[500];

void cad()
{
    char nome_cad[20];
    telaAzul();
    gotoxy(42,5);
    textcolor(WHITE);
    cout << " SEJA BEM VINDO A FARMA UFS ";
    gotoxy(25,8);
    textcolor(WHITE);
    textbackground(GREEN);
    cout << " CADASTRO ";
    gotoxy(25,10);
    textbackground(GREEN);
    textcolor(WHITE);
    cout << " NOME ";
    for (int i = 0; i < 15; i++)
    {
        gotoxy(33+i,10);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(34,10);
    textcolor(WHITE);
    cin >> cadastro[j].nome;

    gotoxy(25,12);
    textbackground(GREEN);
    textcolor(WHITE);
    cout << " LOTE ";
    for (int i = 0; i < 12; i++)
    {
        gotoxy(33+i,12);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(35,12);
    textcolor(WHITE);
    cin >> cadastro[j].lote;
    for(int i=0; i<=j; i++)
    {
        if(j == 0 || i == j)
        {

        }
        else
        {
            if(cadastro[j].lote == cadastro[i].lote && strcmp(cadastro[j].nome,cadastro[i].nome) == 0 && cadastro[j].quantidade > 0)
            {
                gotoxy(35,16);
                textcolor(WHITE);
                cout << " Este Produto nao pode ser cadastrado ";
                gotoxy(35,18);
                textcolor(WHITE);
                cout << " Pois ouve um conflito de lote ";
                gotoxy(35,20);
                textcolor(WHITE);
                cout << " O lote informado ja se encontra cadastrado ";
                Sleep(2000);
                cad();
            }
        }
    }
    gotoxy(25,14);
    textbackground(GREEN);
    textcolor(WHITE);
    cout << " QUANTIDADE ";
    for (int i = 0; i < 12; i++)
    {
        gotoxy(39+i,14);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(41,14);
    textcolor(WHITE);
    cin >> cadastro[j].quantidade;

    gotoxy(25,16);
    textbackground(GREEN);
    textcolor(WHITE);
    cout << " PRECO ";
    for (int i = 0; i < 12; i++)
    {
        gotoxy(34+i,16);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(36,16);
    textcolor(WHITE);
    cin >> cadastro[j].preco;
    j++;
}

void cadastrar ()
{
    int i=0;
    char escolha;
    do
    {
        if(i=0)
        {
            telaAzul();
            cad();
            gotoxy(25,20);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Deseja realizar outro cadastro (s/n) ";
            for (int i = 0; i < 5; i++)
            {
                gotoxy(65+i,20);
                textbackground(RED);
                cout << '\0';
            }
            gotoxy(67,20);
            textcolor(WHITE);
            cin >> escolha;
        }
        else
        {
            cad();
            gotoxy(25,20);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Deseja realizar outro cadastro (s/n) ";
            for (int i = 0; i < 5; i++)
            {
                gotoxy(65+i,20);
                textbackground(RED);
                cout << '\0';
            }
            gotoxy(67,20);
            textcolor(WHITE);
            cin >> escolha;
        }
    }
    while(escolha == 's' || escolha == 'S');
    menu();
}

void venda(char nome_busca[20])
{
    int contador=0;
    for (int j=0; j<500; j++)
    {
        if (strcmp(nome_busca,cadastro[j].nome) == 0)
        {
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,10);
            cout << " Nome ";
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,11+m);
            cout << '\0' << cadastro[j].nome << '\0';
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(42,10);
            cout << " Lote ";
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(42,11+m);
            cout << '\0' << cadastro[j].lote << '\0';
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(50,10);
            cout << " Quantidade ";
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(50,11+m);
            cout << '\0' << cadastro[j].quantidade << '\0';
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(65,10);
            cout << " Preco ";
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(65,11+m);
            cout << '\0' << cadastro[j].preco << '\0';
            m++;
            k = j;
        }
    }
    if( m == 0)
    {
        textbackground(GREEN);
        textcolor(WHITE);
        gotoxy(20,23);
        cout << " PRODUTO NAO ENCONTRADO ";
        Sleep(1000);
        telaAzul();
        gotoxy(42,6);
        textcolor(WHITE);
        cout << " REALIZAR VENDA ";
        gotoxy(20,8);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " Informe o nome do produto ";
        for (int i = 0; i < 15; i++)
        {
            gotoxy(50+i,8);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(52,8);
        textcolor(WHITE);
        cin >> nomebusca;
        venda(nomebusca);
    }
    if( m > 1 )
    {
        m = 0;
        textbackground(GREEN);
        textcolor(WHITE);
        gotoxy(20,17);
        cout << " Informe de qual lote deseja realizar a venda ";
        for (int i = 0; i < 5; i++)
        {
            gotoxy(70+i,17);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(72,17);
        textcolor(WHITE);
        cin >> busca_lote;
        for(int j=0; j<500; j++)
        {
            if(busca_lote == cadastro[j].lote && strcmp(nome_busca,cadastro[j].nome) == 0 && cadastro[j].quantidade > 0)
            {
                contador++;
                textbackground(GREEN);
                textcolor(WHITE);
                gotoxy(20,18);
                cout << " Digite quantas unidades do produto serao vendidas ";
                for (int i = 0; i < 5; i++)
                {
                    gotoxy(74+i,18);
                    textbackground(RED);
                    cout << '\0';
                }
                gotoxy(76,18);
                textcolor(WHITE);
                cin >> quant;
                if(quant <= cadastro[j].quantidade)
                {
                    preco_venda = cadastro[j].preco * quant + preco_venda;
                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(20,20);
                    cout << " Total da Compra " ;
                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(40,20);
                    cout << '\0' << preco_venda << '\0';

                    cadastro[j].quantidade = cadastro[j].quantidade - quant;
                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(20,24);
                    cout << " Deseja adicionar outro produto na compra (s/n) ";
                    for (int i = 0; i < 5; i++)
                    {
                        gotoxy(72+i,24);
                        textbackground(RED);
                        cout << '\0';
                    }
                    gotoxy(73,24);
                    textcolor(WHITE);
                    cin >> nova_compra;
                    if(nova_compra == 's' || nova_compra == 'S')
                    {
                        telaAzul();
                        gotoxy(42,6);
                        textcolor(WHITE);
                        cout << " REALIZAR VENDA ";
                        gotoxy(20,8);
                        textbackground(GREEN);
                        textcolor(WHITE);
                        cout << " Informe o nome do produto ";
                        for (int i = 0; i < 15; i++)
                        {
                            gotoxy(50+i,8);
                            textbackground(RED);
                            cout << '\0';
                        }
                        gotoxy(52,8);
                        textcolor(WHITE);
                        cin >> nomebusca;
                        venda(nomebusca);
                    }
                    else
                    {
                        if(preco_venda > 500)
                        {
                            telaAzul();
                            gotoxy(42,6);
                            textcolor(WHITE);
                            cout << " COMPRA ACIMA DE 500 REAIS ";
                            textbackground(GREEN);
                            textcolor(WHITE);
                            gotoxy(20,14);
                            cout << " Solicite ao gerente a liberacao da compra ";

                            textbackground(GREEN);
                            textcolor(WHITE);
                            gotoxy(20,16);
                            cout << " Informe a sua senha ";
                            for (int i = 0; i < 12; i++)
                            {
                                gotoxy(43+i,16);
                                textbackground(RED);
                                cout << '\0';
                            }
                            gotoxy(45,16);
                            textcolor(WHITE);
                            cin >> gerente;
                            if(strcmp(senha,gerente) == 0 )
                            {
                                pagamento(preco_venda);
                            }
                            else
                            {
                                textbackground(GREEN);
                                textcolor(WHITE);
                                gotoxy(20,23);
                                cout << " Senha Incorreta ";
                                Sleep(800);
                                textbackground(GREEN);
                                textcolor(WHITE);
                                gotoxy(20,22);
                                cout << " Informe a sua senha ";
                                for (int i = 0; i < 12; i++)
                                {
                                    gotoxy(43+i,22);
                                    textbackground(RED);
                                    cout << '\0';
                                }
                                gotoxy(45,22);
                                textcolor(WHITE);
                                cin >> gerente;
                                if(strcmp(senha,gerente) == 0 )
                                {
                                    pagamento(preco_venda);
                                }
                                else
                                {
                                    menu();
                                }
                            }
                        }
                        else
                        {
                            pagamento(preco_venda);
                        }
                    }
                }
                else
                {
                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(20,23);
                    cout << " A quantidade solicitada e maior do que tem no estoque ";
                    Sleep(1000);
                    RealizarVenda();
                }
            }
        }
        if(contador == 0)
        {
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,23);
            cout << " Lote nao Cadastrado ";
            RealizarVenda();
        }
    }
    if(m == 1)
    {
        m=0;
        textcolor(WHITE);
        gotoxy(20,18);
        cout << " Digite quantas unidades do produto serao vendidas ";
        for (int i = 0; i < 5; i++)
        {
            gotoxy(74+i,18);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(76,18);
        textcolor(WHITE);
        cin >> quant;
        if(quant <= cadastro[k].quantidade)
        {
            preco_venda = cadastro[k].preco * quant + preco_venda;
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,20);
            cout << " Total da Compra " ;
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(40,20);
            cout << '\0' << preco_venda << '\0';

            cadastro[k].quantidade = cadastro[k].quantidade - quant;
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,24);
            cout << " Deseja adicionar outro produto na compra (s/n) ";
            for (int i = 0; i < 5; i++)
            {
                gotoxy(72+i,24);
                textbackground(RED);
                cout << '\0';
            }
            gotoxy(74,24);
            textcolor(WHITE);
            cin >> nova_compra;
            if(nova_compra == 's' || nova_compra == 'S')
            {
                k = 0;
                telaAzul();
                gotoxy(42,6);
                textcolor(WHITE);
                cout << " REALIZAR VENDA ";
                gotoxy(20,8);
                textbackground(GREEN);
                textcolor(WHITE);
                cout << " Informe o nome do produto ";
                for (int i = 0; i < 15; i++)
                {
                    gotoxy(50+i,8);
                    textbackground(RED);
                    cout << '\0';
                }
                gotoxy(52,8);
                textcolor(WHITE);
                cin >> nomebusca;
                venda(nomebusca);
            }
            else
            {
                if(preco_venda > 500)
                {
                    telaAzul();
                    gotoxy(42,6);
                    textcolor(WHITE);
                    cout << " COMPRA ACIMA DE 500 REAIS ";
                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(20,14);
                    cout << " Solicite ao gerente a liberacao da compra ";

                    textbackground(GREEN);
                    textcolor(WHITE);
                    gotoxy(20,16);
                    cout << " Informe a sua senha ";
                    for (int i = 0; i < 12; i++)
                    {
                        gotoxy(43+i,16);
                        textbackground(RED);
                        cout << '\0';
                    }
                    gotoxy(45,16);
                    textcolor(WHITE);
                    cin >> gerente;
                    if(strcmp(senha,gerente) == 0 )
                    {
                        pagamento(preco_venda);
                    }
                    else
                    {
                        textbackground(GREEN);
                        textcolor(WHITE);
                        gotoxy(20,23);
                        cout << " Senha Incorreta ";
                        Sleep(800);
                        textbackground(GREEN);
                        textcolor(WHITE);
                        gotoxy(20,22);
                        cout << " Informe a sua senha ";
                        for (int i = 0; i < 12; i++)
                        {
                            gotoxy(43+i,22);
                            textbackground(RED);
                            cout << '\0';
                        }
                        gotoxy(45,22);
                        textcolor(WHITE);
                        cin >> gerente;
                        if(strcmp(senha,gerente) == 0 )
                        {
                            pagamento(preco_venda);
                        }
                        else
                        {
                            pagamento(preco_venda);
                        }
                    }
                }
                else
                {
                    pagamento(preco_venda);
                }

            }
        }
        else
        {
            textbackground(GREEN);
            textcolor(WHITE);
            gotoxy(20,23);
            cout << " A quantidade solicitada e maior do que tem no estoque ";
            Sleep(1000);
            RealizarVenda();
        }
    }
}



void RealizarVenda()
{
    char opcao;
    char nome_busca[20];
    telaAzul();
    gotoxy(42,6);
    textcolor(WHITE);
    cout << " REALIZAR VENDA ";

    do
    {
        if(k == 0)
        {
            gotoxy(20,8);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Informe o nome do produto ";
            for (int i = 0; i < 15; i++)
            {
                gotoxy(50+i,8);
                textbackground(RED);
                cout << '\0';
            }
            gotoxy(52,8);
            textcolor(WHITE);
            cin >> nome_busca;
            venda(nome_busca);
            k++;
        }
        else
        {
            gotoxy(42,6);
            textcolor(WHITE);
            cout << "REALIZAR VENDA\n";
            gotoxy(20,8);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Informe o nome do produto ";
            for (int i = 0; i < 15; i++)
            {
                gotoxy(50+i,8);
                textbackground(RED);
                cout << '\0';
            }
            gotoxy(52,8);
            textcolor(WHITE);
            cin >> nome_busca;
            venda(nome_busca);
        }
        gotoxy(20,24);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " Deseja realizar outra venda (s/n) ";
        for (int i = 0; i < 5; i++)
        {
            gotoxy(58+i,24);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(60,24);
        textcolor(WHITE);
        cin >> opcao;
    }
    while (opcao == 'S' || opcao == 's');
    menu();
}


void consulta()
{
    char nome_consulta[20];
    int opvenda,k=0,busca_lote;
    telaAzul();
    gotoxy(42,6);
    textcolor(WHITE);
    cout << "REALIZAR CONSULTA\n";

    gotoxy(20,10);
    textbackground(GREEN);
    textcolor(WHITE);
    cout << " Informe o nome do produto ";
    for (int i = 0; i < 15; i++)
    {
        gotoxy(50+i,10);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(52,10);
    textcolor(WHITE);
    cin >> nome_consulta;

    for (int i = 0; i < 500; i++)
    {
        if(strcmp(nome_consulta,cadastro[i].nome) == 0)
        {
            gotoxy(20,14);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Nome ";
            gotoxy(20,16+k);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << '\0' << cadastro[i].nome << '\0';
            gotoxy(42,14);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Lote ";
            gotoxy(42,16+k);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << '\0' << cadastro[i].lote << '\0';
            gotoxy(50,14);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Quantidade " ;
            gotoxy(50,16+k);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << '\0' << cadastro[i].quantidade << '\0';
            gotoxy(64,14);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << " Preco ";
            gotoxy(64,16+k);
            textbackground(GREEN);
            textcolor(WHITE);
            cout << '\0' << cadastro[i].preco << '\0';
            k++;
        }
    }
    if(k == 0)
    {
        gotoxy(20,16);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << "Produto nao encontrado";
        gotoxy(20,23);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " 1 - Deseja realizar outra consulta ";
        gotoxy(20,24);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " 2 - SAIR ";
        for (int i = 0; i < 5; i++)
        {
            gotoxy(48+i,26);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(50,26);
        textcolor(WHITE);
        cin >> opvenda;
        switch(opvenda)
        {
        case 1 :
            consulta();
            break;
        case 2 :
            menu();
            break;
        }

    }
    if(k > 0)
    {
        gotoxy(20,22);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " 1 - Deseja realizar venda ";
        gotoxy(20,23);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " 2 - Deseja realizar outra consulta ";
        gotoxy(20,24);
        textbackground(GREEN);
        textcolor(WHITE);
        cout << " 3 - SAIR ";
        for (int i = 0; i < 5; i++)
        {
            gotoxy(48+i,26);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(50,26);
        textcolor(WHITE);
        cin >> opvenda;
        switch(opvenda)
        {
        case 1 :
            telaAzul();
            gotoxy(42,6);
            textcolor(WHITE);
            cout << "REALIZAR VENDA\n";
            venda(nome_consulta);
            break;
        case 2 :
            consulta();
            break;
        case 3 :
            menu();
            break;
        }
    }
}


void pagamento(float& preco)
{
    int opc;
    char comDesconto;
    float valor_recebido = 0.0,troco = 0.0,desconto = 0.0;
    telaAzul();
    gotoxy(42,6);
    textcolor(WHITE);
    cout << " REALIZAR PAGAMENTO ";
    gotoxy(20,10);
    textcolor(WHITE);
    textbackground(GREEN);
    cout << " DESCONTO (S/N) ";
    for (int i = 0; i < 10; i++)
    {
        gotoxy(40+i,10);
        textbackground(RED);
        cout << '\0';
    }
    gotoxy(42,10);
    textcolor(WHITE);
    cin >> comDesconto;
    if(comDesconto == 's' || comDesconto == 'S')
    {
        gotoxy(20,12);
        textcolor(WHITE);
        textbackground(GREEN);
        cout << " PORCENTAGEM DO DESCONTO ";
        for (int i = 0; i < 10; i++)
        {
            gotoxy(50+i,12);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(52,12);
        textcolor(WHITE);
        cin >> desconto;
        desconto = (desconto/100) * preco;
        preco = preco - desconto;
        gotoxy(20,14);
        textcolor(WHITE);
        textbackground(GREEN);
        cout << " TOTAL DA COMPRA ";
        gotoxy(40,14);
        textcolor(WHITE);
        textbackground(RED);
        cout << '\0' << preco << '\0';
        gotoxy(20,16);
        textcolor(WHITE);
        textbackground(GREEN);
        cout << " INFORME A QUANTIA RECEBIDA ";
        for (int i = 0; i < 10; i++)
        {
            gotoxy(50+i,16);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(52,16);
        textcolor(WHITE);
        cin >> valor_recebido;
        if(valor_recebido >= preco)
        {
            valorTroco(valor_recebido,preco,troco);
            gotoxy(20,18);
            textcolor(WHITE);
            textbackground(GREEN);
            cout << " TROCO ";
            gotoxy(30,18);
            textcolor(WHITE);
            textbackground(RED);
            cout << '\0' << troco << '\0';
            gotoxy(20,20);
            textcolor(WHITE);
            textbackground(GREEN);
            cout << " VENDA REALIZADA COM SUCESSO ";
            preco_venda = 0.0;
            Sleep(3000);
            menu();
        }
        else
        {
            gotoxy(20,14);
            textcolor(WHITE);
            cout << " QUANTIA INSUFICIENTE PARA PAGAR A COMPRA ";
            Sleep(3000);
            pagamento(preco);

        }
    }
    else
    {
        gotoxy(20,12);
        textcolor(WHITE);
        textbackground(GREEN);
        cout << " TOTAL DA COMPRA ";
        gotoxy(40,12);
        textcolor(WHITE);
        textbackground(RED);
        cout << '\0' << preco << '\0';
        gotoxy(20,14);
        textcolor(WHITE);
        textbackground(GREEN);
        cout << " INFORME A QUANTIA RECEBIDA ";
        for (int i = 0; i < 10; i++)
        {
            gotoxy(50+i,14);
            textbackground(RED);
            cout << '\0';
        }
        gotoxy(52,14);
        textcolor(WHITE);
        cin >> valor_recebido;
        if(valor_recebido >= preco)
        {
            valorTroco(valor_recebido,preco,troco);
            gotoxy(20,16);
            textcolor(WHITE);
            textbackground(GREEN);
            cout << " TROCO ";
            gotoxy(30,16);
            textcolor(WHITE);
            textbackground(RED);
            cout << '\0' << troco << '\0';
            gotoxy(20,18);
            textcolor(WHITE);
            textbackground(GREEN);
            cout << " VENDA REALIZADA COM SUCESSO ";
            preco_venda = 0.0;
            Sleep(3000);
            menu();
        }
        else
        {
            gotoxy(20,14);
            textcolor(WHITE);
            textbackground(RED);
            cout << " QUANTIA INSUFICIENTE PARA PAGAR A COMPRA ";
            Sleep(2000);
            pagamento(preco);
        }
    }
}

void valorTroco(float recebido, float& preco, float& troco)
{
    troco = recebido - preco;
}

#endif // CADASTRO_H_INCLUDED
