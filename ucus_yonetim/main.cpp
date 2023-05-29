#include <iostream>
#include "Bilet.h"
#include "Ucak.h"
#include <sstream> 
#include <string>
#include <clocale>
#include "Yonetici.h"
#include <fstream>
#include "Rota.h"

using namespace std;


	Ucak ucak;
	Bilet bilet;
	
	Yonetici yonetici=Yonetici("admin","adminsifre");
	Rota rota;
int main() {

	system("color E");	
	setlocale(LC_ALL, "turkish");
		int secim;
		string kullaniciadi,sifre;
	
	while(secim!=7)
	{
	
		cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t-------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t\t\t\t ------S�RAT HAVAYOLLARINA HO�GELD�N------"<<endl;
		cout<<"\t\t\t\t\t\t\t\t-------------------------------------------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t1-Rezervasyon olu�tur\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t2-Rezervasyonu g�r�nt�le\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t3-Rezervasyonu iptal et\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t4-U�uslari g�r�nt�le\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t5-Rotalar� g�r�nt�le\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t6-Y�netici Girisi\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t7-��k��\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t-------------------------------------------\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\tBir i�lem se�iniz: ";
		
	
	
		cin>>secim;
		system("cls");


	switch(secim){
		case 1:	
		{
		
			bilet.RezervasyonAl();
			break;
		}
		
			break;	
		case 2:
			
			int biletno,biletsifre;
			cout<<"Rezervasyon Kodunuzu Giriniz: ";
			cin>>biletno;
			cout<<"Rezervasyon Sifrenizi Giriniz: ";
			cin>>biletsifre;
			bilet.ArananRezervasyonuGoster(biletno,biletsifre);
			break;
			
		case 3:
			
			cout<<"\n\n\t\t\t\t\t\t\t\tSilmek �stedi�iniz Rezervasyon Kodunu Giriniz: ";
			cin>>biletno;
			cout<<"\t\t\t\t\t\t\t\tSilmek �stedi�iniz Rezervasyon Sifrenizi Giriniz: ";
			cin>>biletsifre;
			bilet.ArananRezervasyonuSil(biletno,biletsifre);
			break;
		
		
			
		case 4:
			
			ucak.UcaklariGoster();
			
			break;
			
	
		case 5:
				rota.RotaGoster();
				break;
		case 6:
			cout<<"\n\n\n\n\n\t\t\t\t\tKullan�c� ad�n� giriniz: ";
			cin>>kullaniciadi;
			cout<<"\t\t\t\t\tSifreyi giriniz: ";
			cin>>sifre;
			system("cls");
			if(kullaniciadi==yonetici.getkAdi() && sifre==yonetici.getSifre()){
					int secim2=0;
			while(secim2!=4){
				cout<<"\n\n\n\n\n\n\t\t\t\t\t-------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t--------AAA Havayollar�na Y�netici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t-------------------------------------------------\n\n"<<endl;
		
		
		cout<<"\t\t\t\t\t\t1-U�u� Y�netimi \n"<<endl;
		
		cout<<"\t\t\t\t\t\t2-Rezervasyon Y�netimi \n"<<endl;
		
		cout<<"\t\t\t\t\t\t3-Rota Y�netimi \n"<<endl;

		cout<<"\t\t\t\t\t\t4-Anamen�ye d�n\n\n"<<endl;
		cout<<"\t\t\t\t\tBir i�lem se�iniz: ";
		cin>>secim2;
		
		system("cls");
		
		
		switch(secim2){
			
			case 1:
				yonetici.UcakMenu();
				break;
				
				
			case 2:
				
				yonetici.RezervasyonMenu();
				break;
			
			case 3:
				
				yonetici.RotaMenu();
				break;
			
			default: 
				cout<<"Yanl�� say� girdiniz! 1-4 aras� rakam giriniz."<<endl;
				break;
		}
			
		
		
		
		
		
		
		system("cls");			
			}
		break;
		
			}else{
				cout<<"Yanl�� kullan�c� ad� veya �ifre girdiniz...Tekrar deneyiniz.";
			}
		break;
		
			
			
		case 7:
			cout<<"\n\n\n\t\t\t\t\t\t\t\tBizi tercih etti�iniz icin te�ekk�rler"<<endl;
			
			break;
			
		default:
			
			cout<<"\n\n\t\t\t\t\t\t\t\t1- aras� say� giriniz: "<<endl;
			
			break;
			
		}	
		
	}

		

	return 0;
}
