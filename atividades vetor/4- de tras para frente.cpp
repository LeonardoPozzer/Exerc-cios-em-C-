#include<stdio.h>
#include<windows.h>

//Crie um programa que copie um vetor de 10 posi��es de inteiros (preenchidos aleatoriamente), de tr�s para frente, em um segundo vetor. 5. 
//Implemente um programa em C que preencha um vetor de dimens�o 10 com valores do usu�rio 
//e calcule a soma dos elementos positivos que se encontrarem nas posi��es pares do vetor. 

main(){
	int i, v[5]={5, 17, 31, 44, 50}, z[5];
	
	printf("Mostrando os valores do vetor: \n\n");
	
	for(i=0;i<5;i++){
		printf("%d \t", v[i]);
	}
	for(i=0;i<5;i++){
		z[i]=v[i];
	}
		
	

	printf("\n\nO vetor na ordem inversa e: \n");
	for(i=4;i>=0;i--){
		printf("%d \t", z[i]);	
			
}
}

