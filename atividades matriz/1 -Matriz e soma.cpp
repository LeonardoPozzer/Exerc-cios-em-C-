#include<stdio.h>

//Preencher todos os valores de uma matriz 2x2, em seguida exibir todos os valores 
//e a soma de todos os valores.

main(){

int m[3][3];
int i, j, maior=0, linha, coluna;

for (i=0; i<10; i++){ //Monta os valores da matriz
	for (j=0; j<10; j++){
		printf("Insira um valor: ");
		scanf("%d", &m[i][j]);
	}
}
printf("\n");
for (i=0; i<10; i++){ //Imprime os valores da matriz
	for (j=0; j<3; j++){
		printf("%d\t", m[i][j]);
	}
	printf("\n");
}

printf("\n");
for (i=0; i<10; i++){
	for (j=0; j<10; j++){
		if(m[i][j]>maior){
			maior = m[i][j];
			linha = i;
			coluna = j;
		}
		
}
}
printf("\n");
printf("Maior valor: %d, na posicao %dx%d", maior, linha, coluna);
}


