#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Os propriet�rios de um teatro necessitam de uma ferramenta de software para 
//reservas de lugares. O desenvolvedor contratado verificou que as poltronas 
//dispon�veis para reservas s�o referenciados pelo n�mero da fila e pelo n�mero da 
//cadeira em cada fila, em uma representa��o matricial em que as linhas e colunas 
//correspondem, respectivamente, �s filas e �s colunas de cadeiras. 
//Implemente um programa em C que realize as "reservas" de lugares, (informando a fila e a cadeira) 
//com o c�digo do cliente e, caso a cadeira j� tenha sido reservada, exibir uma 
//mensagem ao usu�rio e solicitar nova posi��o.

main(){

int m[10][15];
int i, j, coluna, linha, loop=1;
float media=0, resultado;
srand(time(NULL));

for (i=0; i<10; i++){ //Monta os valores da matriz
	for (j=0; j<15; j++){
		m[i][j]=(rand() % 2);
		
	}
}
printf("\n");

printf("============================ Mapa de assentos: ============================\n");
for (i=0; i<10; i++){ //Imprime a matriz
	for (j=0; j<15; j++){	
	printf("| %d |", m[i][j]);
	}
	printf("\n");
}

printf("============== Legenda: 0- Assento Vazio/ 1- Assento Ocupado ==============\n");

do
{
	printf("\nEscolha um assento para reservar, primeiro digite a linha e entao a coluna.");
	printf("\nDigite a linha: ");
	scanf("%d", &linha);
	printf("\nDigite a coluna: ");
	scanf("%d", &coluna);
	if(m[linha][coluna]==1){
		printf("\nAssento ocupado! Tente outro.\n");
		system("cls");
	}else{
	m[linha][coluna]=1;
	printf("\nAssento reservado com sucesso!");
	printf("\nDigite 1 para continuar ou 2 para sair...\n");
    scanf("%d", &loop);
    system("cls");
	}
	for (i=0; i<10; i++){ 
		for (j=0; j<15; j++){	
		printf("| %d |", m[i][j]);
		}
		printf("\n");
	}
}while(loop==1);
}






























