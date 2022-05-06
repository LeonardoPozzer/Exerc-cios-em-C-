#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>

//Crie um programa que permita armazenar o nome, a altura e da data de nascimento 
//de 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um vetor. 
//O campo data de nascimento também deve ser uma struct. 

typedef struct Data{	
	int dia, mes, ano;
}Data;

typedef struct Pessoa{	
	char nome[30];
	int altura;
	Data dat;
}Pessoa;

main(){
	int n=2, i;
	Pessoa a[n];

	for(i=0;i<n;i++){
	printf("===== Pessoa indice %d ===== \n", i);
	printf("Nome.....: ");
	fflush(stdin);
	gets(a[i].nome);
	printf("Altura (cm): ");
	scanf("%d", &a[i].altura);
	printf("Dia de nascimento: ");
	scanf("%d", &a[i].dat.dia);
	printf("Mes de nascimento: ");
	scanf("%d", &a[i].dat.mes);
	printf("Ano de nascimento: ");
	scanf("%d", &a[i].dat.ano);
	}
	
	system("cls");
	printf("Mostrando os dados...\n");
	
	for(i=0;i<n;i++){
	printf("\n===== Pessoa indice %d ===== \n", i);
	printf("Nome: %s\n", a[i].nome);
	printf("Altura: %dcm\n", a[i].altura);
	printf("Data de nascimento: %d/%d/%d", a[i].dat.dia,a[i].dat.mes,a[i].dat.ano);
	
}
}



	


		
	

