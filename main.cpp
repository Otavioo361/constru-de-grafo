#include <iostream>
#include<iomanip>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"opa"<<endl;
	ifstream txtFile;
	int li= 0;
	int col= 0;
	int m[100] [100];
	int numeros;
	int l;
	int c;
	int r;
	int contador;
	
	
	FILE *arquivo;
	arquivo = fopen("atividade4.txt","wt" );
	if(arquivo==NULL){
		printf("Nao deu");
		exit(0);
	}
	cout<< "digite a quantidade de linha" << endl;
	cin>>li; 
	cout<<"Digite a quantidade de coluna" << endl;
	cin>>col;
		fprintf(arquivo," %d ",li );
		fprintf(arquivo, " %d ",col);
		fprintf(arquivo, "\n");
		cout<< m[li] [col]<<endl;
		int max = li* col;
	for(contador = 1; contador<=max;contador++){
		cout<<"coloca os numeros "<<endl;
		cin>>numeros;
		fprintf (arquivo," %d ",numeros);
		}
			
	fclose (arquivo);
	

	txtFile.open("atividade4.txt");
	txtFile >> l >> c;
	for(int i=0; i<l; i++)
	{
		for(int j=0; j<c;j++)
		{
			txtFile >> m[i] [j];
		}
	}
	
	cout<<"Ler matriz de tamanho " <<  l  <<" x " << c <<endl;
	cout<< "conteudo da matriz no arquivo:" << endl;
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<c;j++)
		{
			
			cout << m[i] [j] << " - ";			
		}
		cout << endl;
	}
	
	
	arquivo = fopen("atividade4s.txt","w" );
	if(arquivo==NULL){
		printf("Nao deu");
		exit(0);
	}
	fprintf(arquivo,"conteudo da Matriz resultado:");
	fprintf (arquivo,"%d", l);
	fprintf(arquivo,"x");
	fprintf(arquivo,"%d", c);
	fprintf(arquivo,"\n");
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<c;j++)
		{
			
		fprintf (arquivo, "%d-", m[i] [j]);			
		}
		fprintf(arquivo,"\n");
	}
	
	
	
	return 1;
	
	system("pause");
	
}


