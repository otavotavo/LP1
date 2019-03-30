#include<stdio.h>

int main(){

	int num1,num2;


	printf("escolha o primeiro numero\n");
	scanf("%d",&num1);
	printf("escolha o segundo numero\n");
	scanf("%d",&num2);

	if(num2>num1){
	for(num2; num2>=num1; num2--){
		if(num2%2==0)
			printf("%d\n",num2);
		
	};
	}else{
	for(num1; num1>=num2; num1--){
		if(num1%2==0)
			printf("%d\n",num1);
	};
	};

	return 0;

	};

