#ifndef KARE_H
#define KARE_H

#include "GeometrikSekil.h"
#include "Math.h"

struct KARE{
	GeometrikSekil super;
	double kenar;
	
	void (*Yoket)(struct KARE*);
};
typedef struct KARE* Kare;

Kare KareOlustur(char*,double);
double alan(const Kare);
double cevre(const Kare);
void KareYoket(Kare);

#endif