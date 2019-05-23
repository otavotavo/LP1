#include<stdio.h>
//exemplo de cadastro
struct cadastro{
	int cpf;
	int id;
};

//identificar um casa
union casa{
	int cep;
	char *rua;
};

int main(){
struct cadastro pri={224221,434214};
union casa seg;
seg.cep=4225;



	return 0;

};
