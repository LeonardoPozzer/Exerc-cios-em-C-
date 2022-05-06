#include<stdio.h>
#include<windows.h>

//Ler um vetor que contenha as notas de uma turma de 10 alunos. 
//Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. 
//Escrever a média da turma e o resultado da contagem.

main(){
	int i, v[5], sum=0, media, cont=0;
	
	for(i=1;i<6;i++){
		printf("Digite a nota do %d(o) aluno:", i);
		scanf("%d", &v[i]);	
	}
	
	system("cls");
	for(i=0;i<5;i++){
		sum = sum+v[i];		
	}
	
	media=sum/5;
		
	for(i=0;i<5;i++){
		if(v[i]>media){
			cont+=1;
			
		}
	}
	
	printf("A media das notas foi %d e %d alunos tiveram nota acima dela!", media, cont);
	
}	
	

	
	
