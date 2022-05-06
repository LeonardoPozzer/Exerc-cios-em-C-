#include<stdio.h>
#include<windows.h>

//Leia um vetor de 12 posições e em seguida ler também dois valores X e Y quaisquer correspondentes a duas posições no vetor. 
//Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y.
main(){
	int i, v[12], sum=0, x, y;
	
	for(i=0;i<12;i++){
		printf("Digite um valor para a posicao %d :", i);
		scanf("%d", &v[i]);	
	}
	
	system("cls");
	
	printf("Escolha uma posicao do vetor [0-11]: ");
	scanf("%d", &x);
	printf("Escolha uma segunda posicao do vetor [0-11]: ");
	scanf("%d", &y);
	
	system("cls");
	if(x==y){
		printf("Erro!");
		
	}else{
		sum= v[x] + v[y];
		printf("A soma das suas posicoes e: %d", sum);
	
}	
	

	
	
	
	
	
	
		
}


