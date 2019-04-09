#include<stdio.h>

int main(){

float mph=1.6 ;
int veloatual;
float conta;

printf("a velocidade atual\n");
scanf("%d",&veloatual);

conta=veloatual*mph;

if(conta<80){
printf("acelera\n");
}else if(conta>100){
printf("desacelera\n");
}else{
printf("mantenha\n");
};

return 0;

};
