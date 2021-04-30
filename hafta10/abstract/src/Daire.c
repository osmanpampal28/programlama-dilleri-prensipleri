#include "Daire.h"

Daire DaireOlustur(char* renk,double yaricap){
	Daire this;
	this=(Daire)malloc(sizeof(struct DAIRE));
	this->super=GeometrikSekilOlustur(renk);
	this->yaricap=yaricap;
	this->super->Alan=&Alan;
	this->super->Cevre=&Cevre;
	this->Yoket=&DaireYoket;
	return this;
}
double Alan(const Daire this){
	return M_PI*pow(this->yaricap,2);
}
double Cevre(const Daire this){
	return 2*M_PI*this->yaricap;
}
void DaireYoket(Daire this){
	if(this==NULL) return;
	this->super->Yoket(this->super);
	free(this);
}