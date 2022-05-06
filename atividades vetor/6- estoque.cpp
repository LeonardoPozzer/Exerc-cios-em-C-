#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#define MAX 1000

//Crie um método que retorne uma lista de produtos ativos que foram incluídos a mais de um ano.
//Crie outro método que retorne uma lista de produtos que estão com o mínimo abaixo de 200. Caso não tenha produtos no estoque uma exceção deverá ser gerada.
//Em uma terceira função retorne uma lista de produtos ordenada por data de inclusão e por código do produto.
//Por último liste os dez produtos com maior quantidade de estoque.

typedef struct estoque{
	int CodigoProduto, Ativo, Quantidade, Minimo, InclusaoM, InclusaoA, AltA, AltM;
	char nomeProduto[30];	
}Estoque;

int main(){
	int n, i, d, j, tmp, tmp2, tmp3, opcao=0;
	Estoque a[MAX];
	printf("====================== Criando a lista de produtos ========================");	
	printf("\n\nQuantos produtos serao includos? ");
	scanf("%d", &n);
	for(i=0;i<n;i++){	
	printf("\nCodigo do produto: ");
	scanf("%d", &a[i].CodigoProduto);
	printf("\nNome...: ");
	fflush(stdin);
	gets(a[i].nomeProduto);
	printf("\nQuantidade no estoque: ");
	scanf("%d", &a[i].Quantidade);
	printf("\nMinimo no estoque: ");
	scanf("%d", &a[i].Minimo);
	printf("\nAtivo? (0/1) ");
	scanf("%d", &a[i].Ativo);
	system("cls");
	printf("\nMes de inclusao: ");
	scanf("%d", &a[i].InclusaoM);
	printf("\nAno de inclusao: ");
	scanf("%d", &a[i].InclusaoA);
	system("cls");
	printf("\nMes de alteracao: ");
	scanf("%d", &a[i].AltM);
	printf("\nAno de alteracao: ");
	scanf("%d", &a[i].AltA);
	}
	
	do{
		printf("\n==================================================================");
		printf("\n1- Pesquisar produtos ativos que foram incluidos a mais de um ano.");
		printf("\n2- Pesquisar produtos com o minimo de estoque abaixo de 200.");
		printf("\n3- Retornar a lista de produtos por data de inclusao e codigo.");
		printf("\n4- Retornar os 10 produtos com os maiores estoques.");
		printf("\n=================================================================");
		printf("\n\nO que deseja fazer? ");
		scanf("%d", &opcao);
		
		if((opcao>5) or (opcao<1)){
			system("cls");
			printf("Erro!\n");
		}else if(opcao==1){
			for(i=0;i<n;i++){
			if((a[i].Ativo==1) and (2022-a[i].InclusaoA>=2)){
				printf("Codigo: %d \t Nome do Produto: %s ", a[i].CodigoProduto, a[i].nomeProduto);
				}	
			}
		}else if(opcao==2){
			for(i=0;i<n;i++){
				if((a[i].Quantidade<a[i].Minimo) and (a[i].Minimo<=200)){
					if(a[i].Quantidade==0){
						printf("Codigo: %d \t Nome do Produto: %s \t Atencao, este produto esta com o estoque ZERADO!", a[i].CodigoProduto, a[i].nomeProduto);
					}else{
					printf("Codigo: %d \t Nome do Produto: %s \t Estoque abaixo do minimo atual: %d ", a[i].CodigoProduto, a[i].nomeProduto, a[i].Quantidade);
					}	
				}
			}
		}else if(opcao==3){
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if((a[j].InclusaoA > a[i].InclusaoA) && (a[j].InclusaoM>a[i].InclusaoM)){
					tmp = a[i].InclusaoA;         
					a[i].InclusaoA = a[j].InclusaoA;           
					a[j].InclusaoA = tmp;  
					tmp2= a[i].CodigoProduto;
					a[i].CodigoProduto=a[j].CodigoProduto;
					a[j].CodigoProduto=tmp2;
					tmp3= a[i].InclusaoM;
					a[i].InclusaoM=a[j].InclusaoM;
					a[j].InclusaoM=tmp3;					
				}else if(a[j].InclusaoA > a[i].InclusaoA){
					tmp = a[i].InclusaoA;         
					a[i].InclusaoA = a[j].InclusaoA;           
					a[j].InclusaoA = tmp;  
					tmp2= a[i].CodigoProduto;
					a[i].CodigoProduto=a[j].CodigoProduto;
					a[j].CodigoProduto=tmp2;
					tmp3= a[i].InclusaoM;
					a[i].InclusaoM=a[j].InclusaoM;
					a[j].InclusaoM=tmp3;
				}else if((a[j].InclusaoA==a[i].InclusaoA) && (a[j].InclusaoM<a[i].InclusaoM)){
					tmp = a[i].InclusaoA;         
					a[i].InclusaoA = a[j].InclusaoA;           
					a[j].InclusaoA = tmp;  
					tmp2= a[i].CodigoProduto;
					a[i].CodigoProduto=a[j].CodigoProduto;
					a[j].CodigoProduto=tmp2;
					tmp3= a[i].InclusaoM;
					a[i].InclusaoM=a[j].InclusaoM;
					a[j].InclusaoM=tmp3;
				}
			}
		}
		printf("===== Produtos por data de inclusao =====");                     
		for (i=0;i<n;i++){                   
			printf("\nNome: %d \t Data de inclusao: %d/%d ", a[i].CodigoProduto,  a[i].InclusaoM, a[i].InclusaoA);
		}		
		}else if(opcao==4){
		for (i=0;i<n;i++){                  
			for (j=0;j<n;j++){         
				if (a[j].Quantidade < a[i].Quantidade){           
					tmp = a[i].Quantidade;         
					a[i].Quantidade = a[j].Quantidade;           
					a[j].Quantidade = tmp;  
					tmp2= a[i].CodigoProduto;
					a[i].CodigoProduto=a[j].CodigoProduto;
					a[j].CodigoProduto=tmp2;        
				}	  
			}
		}
		printf("===== 10 produtos com maiores estoques =====");                     
		for (i=0;i<10;i++){                   
			printf("\nCodigo: %d \t Estoque: %d ", a[i].CodigoProduto,  a[i].Quantidade);
		}
		}	
	}while(opcao==0);
}


	
	
	
 
