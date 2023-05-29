#include "Yonetici.h"
#include <iostream>
#include <string>
#include "Rota.h"


Yonetici::Yonetici(){
	kAdi="";
	sifre="";
}

Yonetici::Yonetici(string kAdi,string sifre){
	this->kAdi=kAdi;
	this->sifre=sifre;
}




void Yonetici::setkAdi(string kAdi){
	this->kAdi=kAdi;
}

void Yonetici::setSifre(string sifre){
	this->sifre=sifre;
}

string Yonetici::getkAdi(){
	return kAdi;
}

string Yonetici::getSifre(){
	return sifre;
}







void Yonetici::UcakMenu(){
		int secim;

		while(secim!=4){

		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t-------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t--------AAA Havayollarýna Yönetici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Ucus Yönetimi-------------------\n\n"<<endl;
		
	
		cout<<"\t\t\t\t\t\t\t\t1-Uçuþlarý görüntüle \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-Uçuþ ekle  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-Uçuþ sil  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\tBir iþlem seçiniz: ";
		cin>>secim;
		
		system("cls");

				switch(secim){
			case 1:
				Ucak::UcaklariGoster();
				
				break;
				
			case 2: 
		
			
				Ucak::UcakEkle();
				break;
				
			case 3:
				
			
				UcakSil();
				
				break;
			case 4:
				break;
			default:
				cout<<"\t\t\t\t\t\t\t\t1-3 arasi sayi giriniz...";
				break;
			
						}
	}
	
	
}
	
		
				




void Yonetici::RezervasyonMenu(){
		int secim;
	while(secim!=4){

		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t-------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t--------AAA Havayollarýna Yönetici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Rezervasyon Yönetimi-----------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t1-Rezervasyonlari goruntule \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-Rezervasyon ekle  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-Rezervasyon sil  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		cout<<"\t\t\t\t\t\t\t\tBir iþlem seçiniz: ";
		cin>>secim;
		system("cls");

				switch(secim){
			case 1:
				Bilet::RezervasyonlarGoster();
				break;
				
			case 2: 
			
				Bilet::RezervasyonAl();
				break;
				
			case 3:
				int rezno;
				cout<<"\n\n\t\t\t\t\t\t\t\tSilmek Ýstediðiniz Bilet Kodunu Giriniz: ";
				cin>>rezno;
				Bilet::ArananRezervasyonuSilY(rezno);
				break;
			case 4:
				break;
			default:
				cout<<"1-4 arasi sayi giriniz...";
				break;
			
		}
	}
		
}
		



void Yonetici::RotaMenu(){
		int secim;
			while(secim!=4){
		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t-------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t--------AAA Havayollarýna Yönetici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Rota Yönetimi------------------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t1-Rotalari görüntüle \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-Rota olustur  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-Rota sil  \n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\tBir iþlem seçiniz: ";
		cin>>secim;
		system("cls");

				switch(secim){
			case 1:
				Rota().RotaGoster();
				break;
				
			case 2: 
			Rota().RotaEkle(); 
				break;
				
			case 3:
				Rota().RotaSil();
				break;
			case 4:
				break;
			default:
				cout<<"\t\t\t\t\t\t\t\t1-4 arasi sayi giriniz...";
				break;
			
		}
	}
		
		
}




