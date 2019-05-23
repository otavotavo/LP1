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


void campo(struct personagem pa[],int cam,int ts){
int a=0;
printf("   ");
for(int c=0;c<cam;c++){
printf("%d",c);
};
puts("");
for(int i=0;i<cam;i++){
printf("%d  ",i);
for(int b=0;b<cam;b++){
for(int w=0;w<ts;w++){

if(((*(pa+w)).rt.x)==b && ((*(pa+w)).rt.y)==i){
printf("%d",((*(pa+w)).id));
a=1;
};
};
if(a==0){
printf(" ");
};
a=0;

if(b==(cam-1))
puts("");

};
};
};

int main(){

struct personagem le[2];
preenche(&le[0],2);
campo(&le[0],5,2);

return 0;

};
