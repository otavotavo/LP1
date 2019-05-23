#include<stdio.h>
union Preco{
	int euro;
	int real;
	int dolar;
};
struct Preco2{
	int id;
	union Preco b;
};

void exibe(struct Preco2 *sr ){
	switch((*sr).id){
	case 0:
		printf("%d euros\n",((*sr).b.euro));
		break ;
	case 1:
		printf("%d reais\n",((*sr).b.real));
		break ;
	case 2:
		printf("%d dolares\n",((*sr).b.dolar));
		break ;
	};
};

void altera(struct Preco2 *fe,int pre,int a){
	switch(a){
	case 0:
	(*fe).b.euro=pre;
	(*fe).id=a;
		break ;
	case 1:
	(*fe).b.real=pre;
	(*fe).id=a;
		break ;
	case 2:
	(*fe).b.dolar=pre;
	(*fe).id=a;
		break ;
	};
	};

	int main(){

	struct Preco2 aero;
	aero.id=0;
	aero.b.euro=22;

	exibe(&aero);
	altera(&aero,34,1);
	exibe(&aero);

	return 0;

	};
