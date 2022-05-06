#include<stdio.h>
#include<windows.h>

//Leia um vetor de 6 valores reais e exiba a média, o maior e o menor valor. //

main(){
	int i;
	float v[6], sum=0, media=0, maior=0, menor=0;
	
	for(i=0;i<6;i++){
		printf("Digite um valor para a posicao %d :", i);
		scanf("%f", &v[i]);	
	}
	system("cls");
	
	for(i=0;i<6;i++){
		sum = sum+v[i];		
	}
	
	media=sum/6;	
	printf("==== Sua Media e: %.2f ==== \n\n", media);
	
	maior=v[0];
	for(i=1;i<6;i++){
		if(v[i]>maior){
			maior=v[i];
		}
    }
	printf("==== Sua maior valor e: %.2f ==== \n\n", maior);
	
	menor=v[0];
	for(i=1;i<6;i++){
		if(v[i]<menor){
			menor=v[i];
		}
    }
	printf("==== Sua menor valor e: %.2f ==== \n\n", menor);
	
	
	
		
}


