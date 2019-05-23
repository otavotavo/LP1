#include<stdio.h>

struct segun{
int x;
int y;
int z;
};

union ponto{
int a[3];
struct segun pa;
};

int main(){

union ponto tri;
tri.pa.x=3;
tri.pa.y=3;
tri.pa.z=3;
tri.a[0]=3;
tri.a[1]=3;
tri.a[2]=3;
return 0;

};
