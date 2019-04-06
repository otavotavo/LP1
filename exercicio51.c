
#include<stdio.h>

int main(){

	int a,b;
	int *p;

	printf("insira o primeiro numero\n");
	scanf("%d",&a);
	printf("insira o segundo numero\n");
	scanf("%d",&b);

	printf("o 1:%d e o 2:%d\n\n",a,b);

	if(a>b){
		p=&a;
		a=*p-50;
	}else{
		p=&b;
		b=*p-50;
	};


	printf("novamente os valores 1:%d e o 2:%d\n",a,b);

	return 0;

};

