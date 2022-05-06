#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

//Crie duas matrizes 3x3. Preencha uma das matrizes com dados aleatórios entre 1 
//e 50 (rand), em seguida exibir os valores de trás para frente. 

main(){

int m[3][3];
int n[3][3];
int i, j;
srand(time(NULL));

for (i=0; i<3; i++){ //Monta os valores da matriz
	for (j=0; j<3; j++){
		m[i][j]=1 + (rand() % 100);
		
	}
}
printf("\n");
printf("Matriz A: \n\n");
for (i=0; i<3; i++){ //Imprime a primeira matriz
	for (j=0; j<3; j++){	
		printf("%d\t", m[i][j]);
	}
	printf("\n");
}

for (i=0; i<3; i++){ //Troca os valores das matrizes
	for (j=0; j<3; j++){
		n[i][j]=m[i][j];
	}
	printf("\n");
}
printf("Matriz A ao contrario: \n\n");
for (i=2; i>=0; i--){ //Imprime ao contrario
	for (j=2; j>=0; j--){
		printf("%d\t", n[i][j]);
	}
	printf("\n");



}
}





