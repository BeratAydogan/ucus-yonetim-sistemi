#ifndef BILET_H
#define BILET_H
#include <string>
#include "Ucak.h"



class Bilet: public Ucak {


	private:
		int SecilenUcusNo;
		int rezervasyonKodu;
		int rezervasyonSifre;
		int fiyat;
		std::string ad;
		std::string soyad;
		std::string cinsiyet;
		int yas;
		std::string uyruk; 
		int secilenKoltuk;
		int KoltukSinifi;
		bool aktarma2;
		

	public:
		Bilet();
		
		Bilet(int SecilenUcusNo,int rezervasyonKodu,int rezervasyonSifre,int fiyat,std::string ad,	std::string soyad,	std::string cinsiyet,	int yas,  	std::string uyruk,	int secilenKoltuk,int KoltukSinifi);
		
		//Getter-Setter
		void setRezervasyonKodu(int biletKodu);
		void setFiyat(int fiyat);
		void setAd(std::string ad);
		void setSoyad(std::string soyad);
		void setCinsiyet(std::string cinsiyet);
		void setYas(int yas);
		void setUyruk(std::string uyruk);
		
		
		
		std::string getAd();
		std::string getSoyad();
		std::string getCinsiyet();
		std::string getUyruk();
		int  getYas();	
		int getRezervasyonKodu();
		int getFiyat();
		//Getter-Setter Bitiþ
		
		
		
		
		
		void RezervasyonAl();
		void ArananRezervasyonuGoster(int biletkodu,int biletsifre);
		void ArananRezervasyonuSil(int biletkodu, int biletsifre);
		void ArananRezervasyonuSilY(int biletkodu);
		
		void RezervasyonlarGoster();
		
		void FiyatHesap();
	
	
		
	
};

#endif
