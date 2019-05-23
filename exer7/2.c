#include<stdio.h>

struct Personagem{
	int forca;
	int energia;
	int experiencia;
};

struct Personagem preencheA(void){
	struct Personagem tes;
	scanf("%d",&tes.forca);
	scanf("%d",&tes.energia);
	scanf("%d",&tes.experiencia);

return tes;
};


int main(){


	struct Personagem p1=preencheA();
	struct Personagem p2=preencheA();
	printf("(%d,%d,%d) vs (%d,%d,%d)\n",p1.forca,p1.energia,p1.experiencia,p2.forca,p2.energia,p2.experiencia);


return 0;

};
