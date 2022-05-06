#include<stdio.h>
//Leia uma matriz 6 x 6, 
//conte e escreva quantos valores maiores que 10 ela possui. 
main(){

int m[6][6];
int i, j, maior=0;

for (i=0; i<6; i++){ //Monta os valores da matriz
	for (j=0; j<6; j++){
		printf("Insira um valor: ");
		scanf("%d", &m[i][j]);
	}
}
printf("\n");
for (i=0; i<6; i++){ //Imprime os valores da matriz
	for (j=0; j<6; j++){
		printf("%d\t", m[i][j]);
	}
	printf("\n");
}

printf("\n");
for (i=0; i<6; i++){
	for (j=0; j<6; j++){
		if(m[i][j]>10){
			maior++;
		}
		
}
}
printf("\n");

if(maior==0){
	printf("Nao ha valores maiores que 10 nesta matriz!");
}else if(maior==1){
	printf("Ha apenas um valor maior que 0 nesta matriz!");
}else{
	printf("Ha %d valores maiores que 10 nesta matriz!", maior);
}
}


