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
		cout<<"\t\t\t\t\t\t--------AAA Havayollar�na Y�netici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Ucus Y�netimi-------------------\n\n"<<endl;
		
	
		cout<<"\t\t\t\t\t\t\t\t1-U�u�lar� g�r�nt�le \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-U�u� ekle  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-U�u� sil  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\tBir i�lem se�iniz: ";
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
		cout<<"\t\t\t\t\t\t--------AAA Havayollar�na Y�netici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Rezervasyon Y�netimi-----------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t1-Rezervasyonlari goruntule \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-Rezervasyon ekle  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-Rezervasyon sil  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		cout<<"\t\t\t\t\t\t\t\tBir i�lem se�iniz: ";
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
				cout<<"\n\n\t\t\t\t\t\t\t\tSilmek �stedi�iniz Bilet Kodunu Giriniz: ";
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
		cout<<"\t\t\t\t\t\t--------AAA Havayollar�na Y�netici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t\t------------------Rota Y�netimi------------------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t1-Rotalari g�r�nt�le \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t2-Rota olustur  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\t3-Rota sil  \n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t4-Yonetici menusune don  \n"<<endl;
		
		cout<<"\t\t\t\t\t\t\t\tBir i�lem se�iniz: ";
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




