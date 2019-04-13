#include<stdio.h>
#include<stdlib.h>
int main(){

int  timemenor;
int  timemaior;
int  *vitorias;
int  *empates;
int  *derrotas;
int  *pontos;
int  comparacao=0;
int  comparacaonegativa=50;

vitorias= malloc(20);
derrotas= malloc(20);
pontos= malloc(20);
empates= malloc(20);



for(int i=0;i<20;i++){
	
	printf("digite as vitorias do time %d\n",i);
	scanf("%d",(vitorias+i));
	
	printf("digite as derrotas do time %d\n",i);
	scanf("%d",(derrotas+i));
	
	printf("digite os empates do time %d \n",i);
	scanf("%d",(empates+i));
	puts("\n\n");
};


for(int i=0;i<20;i++){
	*(pontos+i)=*(vitorias+i)*3+*(empates+i);
};


for(int i=0;i<20;i++){
	if(*(pontos+i)>comparacao){
		comparacao=*(pontos+i);
		timemaior=i;
	};
};

for(int i=0;i<20;i++){
	if(*(pontos+i)<comparacaonegativa){
		comparacaonegativa=*(pontos+i);
		timemenor=i;
	};
};


printf("Maior pontuaçao: o time %d tem: %d pontos\n",timemaior,comparacao);
printf("Menor pontuaçao: o time %d tem: %d pontos\n",timemenor,comparacaonegativa);

free(vitorias);
free(derrotas);
free(pontos);
free(empates);
	
	
return 0;

};
