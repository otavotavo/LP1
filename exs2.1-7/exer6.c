#include<stdio.h>

int main(){

int a;
int soma=0;

printf("o numero pra ser igual a N\n");
scanf("%d",&a);


for(int i=1;i<=a;i++){
	soma=(i*i)+soma;
};

printf("a soma deu %d\n",soma);

return 0;

};
