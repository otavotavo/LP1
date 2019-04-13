#include<stdio.h>

void media(int *vet,int n){
    int a=0;
    for(int i=0;i<n;i++)
        a=*(vet+i)+a;
    
    printf("A media é:%d\n",a/n);
};

void preenche(int *vec, int n){
    printf("digite os numeros\n");
    for(int i=0;i<n;i++){
        scanf("%d",(vec+i));
    };
};

int main(){

    int vec[10];
    preenche(vec,10);

    media(vec,10);
return 0;
    };
