#include "GeometrikSekil.h"

char* ZamanGetir(){
	char* buff=malloc(sizeof(char)*100);
	time_t simdi=time(0);
	strftime(buff,100,"%d %m %H %M %Y",localtime(&simdi));
	return buff;
}
GeometrikSekil GeometrikSekilOlustur(char* renk){
	GeometrikSekil this;
	this=(GeometrikSekil)malloc(sizeof(struct GEOMETRIKSEKIL));
	this->renk=renk;
	this->olusturulmaTarihi=ZamanGetir();
	
	this->getOlusturulmaTarihi=&OlusturulmaTarihi;
	this->toString=&SekilYaz;
	this->Yoket=&GeometrikSekilYoket;
	
	return this;
}
char* OlusturulmaTarihi(const GeometrikSekil this){
	return this->olusturulmaTarihi;
}
void SekilYaz(const GeometrikSekil this,void *p){
	printf("\n\nTarih: %s",this->olusturulmaTarihi);
	printf("\nRenk: %s",this->renk);
	printf("\nAlan: %lf",this->Alan(p));
	printf("\nCevre: %lf",this->Cevre(p));
}
void GeometrikSekilYoket(GeometrikSekil this){
	if(this==NULL) return;
	free(this->olusturulmaTarihi);
	free(this);
}