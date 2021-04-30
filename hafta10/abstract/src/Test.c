#include "Daire.h"
#include "Kare.h"

int main(){
	Daire daire=DaireOlustur("Mavi",12);
	daire->super->toString(daire->super,daire);
	
	Kare kare=KareOlustur("Yeşil",54);
	kare->super->toString(kare->super,kare);
	
	daire->Yoket(daire);
	kare->Yoket(kare);
	
	return 0;
}