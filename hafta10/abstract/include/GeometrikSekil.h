#ifndef GEOMETRIKSEKIL_H
#define GEOMETRIKSEKIL_H
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

struct GEOMETRIKSEKIL{
	char *renk;
	char *olusturulmaTarihi;
	
	char* (*getOlusturulmaTarihi)(struct GEOMETRIKSEKIL*);
	void (*toString)(struct GEOMETRIKSEKIL*,void*);
	double (*Alan)();
	double (*Cevre)();
	void (*Yoket)(struct GEOMETRIKSEKIL*);
};
typedef struct GEOMETRIKSEKIL* GeometrikSekil;

GeometrikSekil GeometrikSekilOlustur(char*);
char* OlusturulmaTarihi(const GeometrikSekil);
void SekilYaz(const GeometrikSekil,void*);
void GeometrikSekilYoket(GeometrikSekil);

#endif