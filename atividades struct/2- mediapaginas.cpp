#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//Fazer um programa com uma estrutura �livro�, que cont�m os elementos t�tulo, ano 
//de edi��o, n�mero de p�ginas e pre�o. Criar uma vari�vel desta estrutura que � um 
//vetor de 5 elementos. Ler os valores para a estrutura e imprimir a m�dia do n�mero de 
//p�ginas dos livros. 

typedef struct Livro{	
	char titulo[30];
	int ano, paginas;
	float preco;
}Livro;

main(){
	int n=5, i;
	float total=0, media=0;
	
	Livro a[n];

	for(i=0;i<n;i++){
	printf("===== Livro indice %d ===== \n", i);
	printf("Nome.....: ");
	fflush(stdin);
	gets(a[i].titulo);
	printf("Ano: ");
	scanf("%d", &a[i].ano);
	printf("P�ginas: ");
	scanf("%d", &a[i].paginas);
	printf("Preco: ");
	scanf("%f", &a[i].preco);
	}

	for(i=0;i<n;i++){
	total = a[i].paginas + total;
	}
	
	media = total/n;
	printf("A media de paginas dos seus livros � de %.2f: ", media);
	
	
	
	
	
}



	


		
	

