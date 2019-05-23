#include<stdio.h>

struct posi{
	int x;
	int y;
};

struct personagem{
	int id;
	int pontos;
	struct posi rt;
};

void preenche(struct personagem p[],int tam){
for(int i=0;i<tam;i++){
printf("o id\n");
scanf("%d",&(*(p+i)).id);
printf("os pontos\n");
scanf("%d",&(*(p+i)).pontos);
printf("o x\n");
scanf("%d",&(*(p+i)).rt.x);
printf("o y\n");
scanf("%d",&(*(p+i)).rt.y);
};
};
int main(){

/*struct personagem p1;
p1.id=1;
p1.pontos=2;
p1.rt.x=3;
p1.rt.y=3;
*/

struct personagem le[10];
preenche(&le[0],10);




//printf("os pontsdfa x %d y %d\n",p1.rt.x,p1.rt.y);
//printf("os pontsdfa x %d y %d\n",rt.x,rt.y);

return 0;

};
