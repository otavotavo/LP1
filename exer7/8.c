#include<stdio.h>

struct ponto{
	int x;
	int y;
};

void preenche(struct ponto *p){
	scanf("%d",&(*p).x);
	scanf("%d",&(*p).y);

};

void pontos(struct ponto pa[],int tam){
for(int i=0;i<tam;i++){
	preenche(pa+i);
};
};

void distante(struct ponto er[], int mam){
int a=0;
int b=0;
for(int i=0;i<mam;i++){
if(a<((*(er+i)).x)+((*(er+i)).y)){
a=((*(er+i)).x)+((*(er+i)).y);
b=i;
};
};
printf("o ponto mais distsante é o %d\n",b);
};

int main(){

struct ponto casi[10];
pontos(&casi[0],10);
distante(&casi[0],10);

return 0;

};

