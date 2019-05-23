#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
	union pri{
		int numpatas;
		int quantdentes;
		int autonomiavoo;
		int autonomiaagua;
	};

	union seg{
		float espessurapele;
		float frequencanto;
		float volumecerebro;
		float espessuraovos;
	};

	union ter{
		bool calda;
		float comprimentobico;
		float veloterrestre;
		bool venenoso;
	};

struct Animal{
	int a,b,c;
	char *cor;
	char *especie;
	union pri um;
	union seg dois;
	union ter tres;
};

int main(){

	struct Animal anfi1;
	anfi1.cor=malloc(14);
	anfi1.especie=malloc(14);
	anfi1.a=0;
	anfi1.b=0;
	anfi1.c=0;
	anfi1.cor="amarelo";
	anfi1.especie="passarus";
	anfi1.um.numpatas=4;
	anfi1.dois.espessurapele=3.32;
	anfi1.tres.calda=1;

	struct Animal anfi2;
	anfi2.cor=malloc(14);
	anfi2.especie=malloc(14);
	anfi2.a=0;
	anfi2.b=0;
	anfi2.c=0;
	anfi2.cor="lilas";
	anfi2.especie="avec";
	anfi2.um.numpatas=8;
	anfi2.dois.espessurapele=2.1;
	anfi2.tres.calda=0;
	
	struct Animal ave1;
	ave1.cor=malloc(14);
	ave1.especie=malloc(14);
	ave1.a=2;
	ave1.b=1;
	ave1.c=1;
	ave1.cor="roxo";
	ave1.especie="espiritum";
	ave1.um.autonomiavoo=13;
	ave1.dois.frequencanto=4.12;
	ave1.tres.comprimentobico=21.3;

	struct Animal ave2;
	ave2.cor=malloc(14);
	ave2.especie=malloc(14);
	ave2.a=2;
	ave2.b=1;
	ave2.c=1;
	ave2.cor="amarelo";
	ave2.especie="papoale";
	ave2.um.autonomiavoo=43;
	ave2.dois.frequencanto=3.32;
	ave2.tres.comprimentobico=0.3;

	struct Animal mami1;
	mami1.cor=malloc(14);
	mami1.especie=malloc(14);
	mami1.a=1;
	mami1.b=2;
	mami1.c=2;
	mami1.cor="verde";
	mami1.especie="soniferum";
	mami1.um.quantdentes=32;
	mami1.dois.volumecerebro=33.2;
	mami1.tres.veloterrestre=22.1;
	
	struct Animal rept1;
	rept1.cor=malloc(14);
	rept1.especie=malloc(14);
	rept1.a=3;
	rept1.b=3;
	rept1.c=3;
	rept1.cor="azul";
	rept1.especie="passiflora";
	rept1.um.autonomiaagua=43;
	rept1.dois.espessuraovos=14.2;
	rept1.tres.venenoso=1;
return 0;

};
