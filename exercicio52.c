#include<stdio.h>

void compra (int *conta, int valor){
	*conta=*conta-valor;
};	


int main(){

	int *p;
       	int minha_conta1, minha_conta2;

	printf("o valor da primeira conta\n");
	scanf("%d",&minha_conta1);
	printf("o valor da segunda conta\n");
	scanf("%d",&minha_conta2);

	if(minha_conta1>minha_conta2){
		p=&minha_conta1; 
	}else{
		p=&minha_conta2; 
	};
	
	compra(p,500);


	printf("valor da conta 1:%d ,valor da conta 2:%d\n",minha_conta1,minha_conta2);
	
	return 0;
};
		
		

	



	
