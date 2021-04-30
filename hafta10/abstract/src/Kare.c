#include "Kare.h"

Kare KareOlustur(char* renk,double kenar){
	Kare this;
	this=(Kare)malloc(sizeof(struct KARE));
	this->super=GeometrikSekilOlustur(renk);
	this->kenar=kenar;
	this->super->Alan=&alan;
	this->super->Cevre=&cevre;
	this->Yoket=&KareYoket;
	return this;
}
double alan(const Kare this){
	return pow(this->kenar,2);
}
double cevre(const Kare this){
	return 4*this->kenar;
}
void KareYoket(Kare this){
	if(this==NULL) return;
	this->super->Yoket(this->super);
	free(this);
}