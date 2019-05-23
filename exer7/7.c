#include<stdio.h>

struct dimensoes{
	float largura;
	float profundidade;
	float altura;
};

void  preenche(struct dimensoes *p){
	scanf("%f",&(*p).largura);
	scanf("%f",&(*p).profundidade);
	scanf("%f",&(*p).altura);
};

int main(){

struct dimensoes armario;
preenche(&armario);

printf("largura:%f profundidade:%f altura:%f\n",armario.largura,armario.profundidade,armario.altura);


return 0;

};
