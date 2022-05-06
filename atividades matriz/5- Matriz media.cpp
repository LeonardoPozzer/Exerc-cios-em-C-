#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Crie um programa que recebe uma matriz bidimensional inteira 5x5 e um inteiro 
//que indica uma de suas linhas, e retorna a média dos valores daquela linha apenas. 


main(){

int m[5][5];
int i, j, k=0;
float media=0, resultado;
srand(time(NULL));

for (i=0; i<5; i++){ //Monta os valores da matriz
	for (j=0; j<5; j++){
		m[i][j]=1 + (rand() % 10);
		
	}
}
printf("\n");

for (i=0; i<5; i++){ //Imprime a primeira matriz
	for (j=0; j<5; j++){	
		printf("%d\t", m[i][j]);
	}
	printf("\n");
}

for(i=0; i<5;i++){
	for (j=0; j<5; j++){
		media = media+m[k][j];
	}
	media = media/5;
	printf("\nA media da linha %d e: %.2f", k, media);
	media=0;
	k++;
}




}






