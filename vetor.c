#include<stdio.h>

int main(){

	int temps[5];
	int short media = 0 ;
        
	for(int insercao=0; insercao<=5; insercao++){
		printf("bota as variaveis:");
		scanf("%d",&temps[insercao]);
				};

	for(short int i=0; i<=5; i++){
		media=media+temps[i];
	};


	media=media/5;

	for(short int acimamedia=0; acimamedia<=5; acimamedia++){
		if(temps[acimamedia]>media){
			printf("temperatura acima da media %d \n",temps[acimamedia]);
		};
	};

	return 0;

};
