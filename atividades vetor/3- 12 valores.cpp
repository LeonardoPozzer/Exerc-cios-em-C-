#include<stdio.h>
#include<windows.h>

//Leia um vetor de 12 posi��es e em seguida ler tamb�m dois valores X e Y quaisquer correspondentes a duas posi��es no vetor. 
//Ao final seu programa dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y.
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


