#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Criar dois vetores de cinco posições, sendo que cada vetor corresponde a um jogador. 
//O vetor é especificado pela struct Lutador, com os seguintes campos: 
//• Nome do lutador 
//• Poder do jogador (valor inteiro gerado pela função rand) 
//O nome do lutador deverá ser preenchido pelo usuário e o poder da arma deverá ser 
//gerado pela função rand (não mostrar o valor gerado ao preencher). 
//O jogo consiste em comparar cada posição de um vetor com a mesma posição do 
//outro vetor e mostrar o nome, poder e qual dos dois venceu a batalha (maior poder).

typedef struct Lutador{	
	char nome[30];
	int poder[5];
}Lutador;

main(){
	srand(time(NULL));
	
	int n=2, i, poder0=0, poder1=0, index;
	Lutador a[n];

	//Gerando lutadores
	printf("\n===== Lutador indice %d ===== \n\n", 0);
	printf("Nome.....: ");
	fflush(stdin);
	gets(a[0].nome);
	
	for(i=0;i<5;i++){
		a[0].poder[i]=(rand() % 100);
		system("cls");
		printf("Gerando poder.");
		system("cls");
	}
	printf("===== Poder do lutador %s gerado! =====\n", a[0].nome);
	
	//Gerando lutadores
	printf("\n===== Lutador indice %d ===== \n\n", 0);
	printf("Nome.....: ");
	fflush(stdin);
	gets(a[1].nome);
	srand(time(NULL));
	
	for(i=0;i<5;i++){
		a[1].poder[i]=(rand() % 100);
		system("cls");
		printf("Gerando poder.");
		system("cls");
	}
	printf("===== Poder do lutador %s gerado! =====\n", a[1].nome);
	printf("\nAperte qualquer tecla para prosseguir...\n ");
	getch(); 
	system("cls");
	printf("===== Hora da Batalha! =====\n\n");
	//Batalha
	for(i=0;i<5;i++){
		if(a[0].poder[i]>a[1].poder[i]){
			poder0++;
			index=i;
			printf("Lutador %s vence a %d batalha!\n", a[0].nome, index);
		}else if(a[1].poder[i]>a[0].poder[i]){
			poder1++;
			index=i;
			printf("Lutador %s vence a %d batalha!\n", a[1].nome, index);
		}
	}
	
	printf("\nAperte qualquer tecla para prosseguir...\n ");
	getch();
	system("cls");
	//Tela de resultados
	printf("\n\n\n===== Resultados! =====\n\n");
	if(poder0>poder1){
		printf("O lutador %s venceu a luta!\n", a[0].nome);
	}else{
		printf("O lutador %s venceu a luta!\n", a[1].nome);
	}
	printf("\nAperte qualquer tecla para prosseguir...\n ");
	getch();
	system("cls");
	//Dados

	printf("\n===== Dados do Lutador %s =====\n", a[0].nome);
	for(i=0;i<5;i++){
		printf(" Poder na batalha %d: %d\n", i, a[0].poder[i]);
	}
	printf("\n===== Dados do Lutador %s =====\n", a[1].nome);
	for(i=0;i<5;i++){
		printf(" Poder na batalha %d: %d\n", i, a[1].poder[i]);
	}
	
	
	
}

	
	
	
	
	




	


		
	

