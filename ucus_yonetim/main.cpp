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
		cout<<"\t\t\t\t\t\t\t\t ------SÜRAT HAVAYOLLARINA HOÞGELDÝN------"<<endl;
		cout<<"\t\t\t\t\t\t\t\t-------------------------------------------\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t1-Rezervasyon oluþtur\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t2-Rezervasyonu görüntüle\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t3-Rezervasyonu iptal et\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t4-Uçuslari görüntüle\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t5-Rotalarý görüntüle\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t6-Yönetici Girisi\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t\t7-Çýkýþ\n\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\t-------------------------------------------\n"<<endl;
		cout<<"\t\t\t\t\t\t\t\tBir iþlem seçiniz: ";
		
	
	
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
			
			cout<<"\n\n\t\t\t\t\t\t\t\tSilmek Ýstediðiniz Rezervasyon Kodunu Giriniz: ";
			cin>>biletno;
			cout<<"\t\t\t\t\t\t\t\tSilmek Ýstediðiniz Rezervasyon Sifrenizi Giriniz: ";
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
			cout<<"\n\n\n\n\n\t\t\t\t\tKullanýcý adýný giriniz: ";
			cin>>kullaniciadi;
			cout<<"\t\t\t\t\tSifreyi giriniz: ";
			cin>>sifre;
			system("cls");
			if(kullaniciadi==yonetici.getkAdi() && sifre==yonetici.getSifre()){
					int secim2=0;
			while(secim2!=4){
				cout<<"\n\n\n\n\n\n\t\t\t\t\t-------------------------------------------------"<<endl;
		cout<<"\t\t\t\t\t--------AAA Havayollarýna Yönetici Paneli--------"<<endl;
		cout<<"\t\t\t\t\t-------------------------------------------------\n\n"<<endl;
		
		
		cout<<"\t\t\t\t\t\t1-Uçuþ Yönetimi \n"<<endl;
		
		cout<<"\t\t\t\t\t\t2-Rezervasyon Yönetimi \n"<<endl;
		
		cout<<"\t\t\t\t\t\t3-Rota Yönetimi \n"<<endl;

		cout<<"\t\t\t\t\t\t4-Anamenüye dön\n\n"<<endl;
		cout<<"\t\t\t\t\tBir iþlem seçiniz: ";
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
				cout<<"Yanlýþ sayý girdiniz! 1-4 arasý rakam giriniz."<<endl;
				break;
		}
			
		
		
		
		
		
		
		system("cls");			
			}
		break;
		
			}else{
				cout<<"Yanlýþ kullanýcý adý veya þifre girdiniz...Tekrar deneyiniz.";
			}
		break;
		
			
			
		case 7:
			cout<<"\n\n\n\t\t\t\t\t\t\t\tBizi tercih ettiðiniz icin teþekkürler"<<endl;
			
			break;
			
		default:
			
			cout<<"\n\n\t\t\t\t\t\t\t\t1- arasý sayý giriniz: "<<endl;
			
			break;
			
		}	
		
	}

		

	return 0;
}
