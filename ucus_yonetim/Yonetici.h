#ifndef YONETICI_H
#define YONETICI_H
#include "Bilet.h"
#include <string>

class Yonetici: public Bilet
{	private:
		string kAdi;
		string sifre;	//ADMÝN GÝRÝÞÝ YAPMAYI UNUTMA 
		
	public: 
	
	
		Yonetici();
		Yonetici(string kAdi,string sifre);
		
		
		void setkAdi(string kAdi);
		void setSifre(string sifre);
		string getkAdi();
		string getSifre();
			
			
			
		void UcakMenu();
		void RezervasyonMenu();
		void RotaMenu();//BURA SIKINTI 



};

#endif
