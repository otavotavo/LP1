#include<stdio.h>

union pessoa{
float alturametros;
float alturapes;
};

struct altura{
int a;
union pessoa pre;
};

void preenche(struct altura *p){
switch((*p).a){
case 0:
	printf("a altura em metros é %f \n",(*p).pre.alturametros);
	break;
case 1:
	printf("a altura em pes é %f \n",(*p).pre.alturapes);
	break;
};
};
	
int main(){
struct altura rt;
rt.a=0;
rt.pre.alturametros=1.81;

preenche(&rt);

return 0;

};


