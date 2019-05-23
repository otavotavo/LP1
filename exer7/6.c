#include<stdio.h>


struct atleta{
	float altura;
	float recorde;
	int idade;
};

void exibir(struct atleta *p){

printf("altura dele:%f seu recorde atual:%f idade:%d\n",(*p).altura,(*p).recorde,(*p).idade);

};

int main(){

struct atleta michel={1.84,34.7,29};
struct atleta ronaldin={1.76,34.2,34};
struct atleta ronaldocascao2002={1.73,29.7,32};

exibir(&michel);
exibir(&ronaldin);
exibir(&ronaldocascao2002);

return 0;

};
