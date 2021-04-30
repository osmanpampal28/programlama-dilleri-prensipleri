#ifndef DAIRE_H
#define DAIRE_H

#include "GeometrikSekil.h"
#include "Math.h"

struct DAIRE{
	GeometrikSekil super;
	double yaricap;
	
	void (*Yoket)(struct DAIRE*);
};

typedef struct DAIRE* Daire;

Daire DaireOlustur(char*,double);
double Alan(const Daire);
double Cevre(const Daire);
void DaireYoket(Daire);

#endif