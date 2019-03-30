#include<stdio.h>

int main(){

	char notas[50];
	int soma=0;
 	int alunoacima=0;
	
	for(int i=0;i<=49;i++)
		scanf("%hhd",&notas[i]);
	
	for(int d=0;d<=50;d++){
		soma=soma+notas[d];
	};
	
	soma=soma/50;
	printf("a média é: %d\n",soma);

	for(int e=0;e<=50;e++){
		if(notas[e]>soma)
			alunoacima=alunoacima+1;
	};
	
		printf("alunos acima da média %d\n",alunoacima);
	return 0;

};
