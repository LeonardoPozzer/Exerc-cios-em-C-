#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//Crie um programa que permita armazenar o nome, a altura e da data de nascimento 
//de 10 pessoas. Cada pessoa deve ser representada por uma struct dentro de um vetor. 
//O campo data de nascimento também deve ser uma struct. 


typedef struct Hora{	
	int hora;
	int minuto;
	int segundo;
}Hora;

typedef struct Data{	
	int dia;
	int mes;
	int ano;
}Data;

typedef struct Compromisso{	
	char descr[30];
	Hora hor;
	Data dat;
}Compromisso;


main(){
	Compromisso comp;

	printf("===== Agendamento ===== ");
	
	printf("\nDia: ");
	scanf("%d", &comp.dat.dia);
	printf("Mes: ");
	scanf("%d", &comp.dat.mes);
	printf("Ano: ");
	scanf("%d", &comp.dat.ano);	
	printf("\nHoras: ");
	scanf("%d", &comp.hor.hora);
	printf("Minutos: ");
	scanf("%d", &comp.hor.minuto);
	printf("Segundos: ");
	scanf("%d", &comp.hor.segundo);
	printf("\nDescricao: ");
	fflush(stdin);
	gets(comp.descr);
	
	printf("\n===== Evento ===== ");
	printf("\n\nData: %d/%d/%d\n", comp.dat.dia, comp.dat.mes, comp.dat.ano);
	printf("\nHora: %d:%d:%d\n", comp.hor.hora, comp.hor.minuto, comp.hor.segundo);
	printf("\nDescricao: %s\n", comp.descr);
	}


		
	

