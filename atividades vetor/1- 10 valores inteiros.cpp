#include<stdio.h>
#include<windows.h>

//Leia um vetor de 10 valores inteiros e exiba todos os valores ímpares. //

main(){
	int v[10], i;
	
	for(i=0;i<10;i++){
		printf("Digite um valor para a posicao %d :", i);
		scanf("%d", &v[i]);	
	}
	
	system("cls");
	printf("==== Valores impares detectados: ==== \n\n");
	for(i=0;i<10;i++){
		if(v[i]%2==1){
			printf("%d\t", v[i]);
		}
	}
}


