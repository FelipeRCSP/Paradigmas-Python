#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "LimpaTela.h"
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;
void MenuInicial();
float Verif(float *N)
{
	while(*N<0 || *N>10)
	{
		cout<<"Nota Invalida.\n";
		cout<<"Informe a nota novamente:";
		cin>>*N;
		//limpatela();
	}
	return *N;
}
float CriaNota2()
{
	float P2,Ma2,Mb2,A2;
	cout<<"Vamos formular a nota da A2.\n";
	cout<<"Informe a nota da P2:";
	cin>>P2;
	Verif(&P2);
	cout<<"Informe a nota da Ma2:";
	cin>>Ma2;
	Verif(&Ma2);
	cout<<"Informe a nota da Mb2:";
	cin>>Mb2;
	Verif(&Mb2);
	A2=(P2*0.7)+(Ma2*0.2)+(Mb2*0.1);
	return A2;
}
float CriaNota()
{
	float P1,Ma1,Mb1,A1=0;
	cout<<"Vamos formular a nota da A1.\n";
	cout<<"Informe a nota da P1:";
	cin>>P1;
	Verif(&P1);
	cout<<"Informe a nota da Ma1:";
	cin>>Ma1;
	Verif(&Ma1);
	cout<<"Informe a nota da Mb1:";
	cin>>Mb1;
	Verif(&Mb1);
	A1=(P1*0.7)+(Ma1*0.2)+(Mb1*0.1);
	return A1;
}
float Media(float A1,float A2, int RA,char Nome[100], char Sobrenome[100])
{
	limpatela();
	float Media,Spa;
	cout<<"Informe a nota de SPA:";
	cin>>Spa;
	Media=((A1*1)+(Spa*1)+(A2*2))/4;
	cout<<"Nota A1:"<<A1<<endl;
	cout<<"Nota A2:"<<A2<<endl;
	cout<<"RA do Aluno:"<<RA<<"\n";
	printf("Nome do Aluno:%s %s",Nome,Sobrenome);
	printf("\n");
	cout<<"Media:"<<Media<<endl;
	return Media;
}
void VerifMedia(float M)
{
	int opcao=0;
	float Freq;
	cout<<"Informe a Frequencia do aluno:";
	cin>>Freq;
	if(M>=5.0 && Freq>=75)
	{
		cout<<"Aluno Aprovado.\n";
	}
	if(M>=3.0 && M<5.0 && Freq>=75)
	{
		cout<<"Necessita fazer RE.\n";
	}
	if(M<3.0 || Freq<75)
	{
		cout<<"Reprovado.\n";
	}
	while(opcao<1 || opcao>2)
    {
    cout<<"\n";
    cout<<"1-Deseja inserir outra nota.\n";
	cout<<"2-Sair.\n";
	cout<<"Escolha uma opcao e tecle ENTER:";
	cin>>opcao;
    }
    limpatela();
	switch(opcao)
	{
	    case 1:
	    MenuInicial();
		break;
	    case 2:
	    limpatela();
	    cout<<"Ate mais.\n";
	    break;
	}
}
void Sobre()
{
	int opcao=0;
	cout<<"Algoritmo desenvolvido pelos alunos:\n";
	cout<<"Felipe\n";
	cout<<"Osvaldo\n";
	cout<<"Ronaldo\n";
		while(opcao<1 || opcao>2)
    {
    cout<<"\n";
    cout<<"1-Deseja voltar ao Menu Inicial.\n";
	cout<<"2-Sair.\n";
	cout<<"Escolha uma opcao e tecle ENTER:";
	cin>>opcao;
    }
    limpatela();
	switch(opcao)
	{
	    case 1:
	    MenuInicial();
		break;
	    case 2:
	    limpatela();
	    cout<<"Ate mais.\n";
	    break;
	}
}
void MenuInicial()
{
 int opcao=0;
 int RA;
 float A1,A2,M;
 setlocale(LC_ALL, "Portuguese");
 char Nome[100];
 char Sobrenome[100];
    while(opcao<1 || opcao>3)
    {
    limpatela();
    cout<<"Bem vindo ao Sistemas de Notas.\n";
	cout<<"1-Inserir notas.\n";
	cout<<"2-Sobre.\n";
	cout<<"3-Sair.\n";
	cout<<"Escolha uma opcao e tecle ENTER:";
	cin>>opcao;
    }
    limpatela();
	switch(opcao)
	{
	    case 1:
	    //limpatela();
	    cout<<"Digite o RA do aluno:";
	    cin>>RA;
	    printf("Nome do Aluno:");
	    scanf("%s",Nome);
	    printf("Sobrenome do Aluno:");
	    scanf("%s",Sobrenome);
	    A1=CriaNota();
	    A2=CriaNota2();
	    M=Media(A1,A2,RA,Nome,Sobrenome);
	    VerifMedia(M);
		break;

	    case 2:
	    //limpatela();
	    Sobre();
	    break;

	    case 3:
	    //limpatela();
	    cout<<"Ate mais.\n";
	    break;
	}
}
int main ()
{	
MenuInicial();
	
return 0;
}
