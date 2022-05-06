#include <stdlib.h>
#include <stdio.h>

//Crie uma função onde receba uma lista de funcionários e seus salários e um índice de reajuste. 
//Essa função deve retornar uma lista de funcionários com um novo salário.

typedef struct funcionario{
	char nome[30];
	float salario;
}Funcionario;

int main(){
	int n, i;
	float reaj, anterior[n];
	Funcionario a[n];
		
	printf("Quantos funcionarios ha na lista? ");
	scanf("%d", &n);
	printf("\nQual sera o indice de reajuste? ");
	scanf("%f", &reaj);
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("\nNome...: ");
		fflush(stdin);
		gets(a[i].nome);
		printf("\nSalario: ");
		scanf("%f", &a[i].salario);
	}
	
	for(i=0;i<n;i++){
		anterior[i]=a[i].salario;
		a[i].salario+=a[i].salario*(reaj/100);
	}
	
	system("cls");
	for(i=0;i<n;i++){
		printf("\nNome: %s", a[i].nome);
		printf("\nSalario anterior: R$%.2f\t Salario com reajuste: R$%.2f", anterior[i], a[i].salario);
		printf("\n");
	}
}


