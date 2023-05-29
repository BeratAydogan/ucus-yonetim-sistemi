#include "Bilet.h"
#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <stdexcept>      
#include <fstream>
using namespace std;

//CONSTRUCTERLAR
	
		Bilet::Bilet(int SecilenUcusNo,int rezervasyonKodu,int rezervasyonSifre,int fiyat,std::string ad,	std::string soyad,	std::string cinsiyet,	int yas,  	std::string uyruk,	int secilenKoltuk,int KoltukSinifi)
		{
		this->SecilenUcusNo= SecilenUcusNo;
		this->rezervasyonKodu= rezervasyonKodu;
		this->rezervasyonSifre=rezervasyonSifre;
		this-> fiyat=fiyat;
		this-> ad=ad;
		this->soyad=soyad;
		this-> cinsiyet=cinsiyet;
		this->yas=yas;
		this-> uyruk=uyruk; 
		this->secilenKoltuk=secilenKoltuk;
		this-> KoltukSinifi=KoltukSinifi;	
		}
		
		
		Bilet::Bilet()
		{
		SecilenUcusNo=0;
		rezervasyonKodu=0;
		rezervasyonSifre=0;
		fiyat=0;
		ad="";
		soyad="";
		cinsiyet="";
		yas=0;
		uyruk=""; 
		secilenKoltuk=0;
		KoltukSinifi=0;
		}
		
		//CONSTRUCTERLAR BÝTÝÞ


				//SETTER FONKSÝYONLAR
			
			
		void Bilet::setRezervasyonKodu(int rezervasyonKodu)
		{
			this->rezervasyonKodu=rezervasyonKodu;
		}
		
		
		void Bilet::setFiyat(int fiyat)
		{
			this->fiyat=fiyat;
		}
		
		
		void Bilet::setAd(std::string ad)
		{
		this->ad=ad;
		}
		
		void Bilet::setSoyad(std::string soyad)
		{
			this->soyad=soyad;
		}
		
		void Bilet::setCinsiyet(std::string cinsiyet)
		{
			this->cinsiyet=cinsiyet;
		}
		
		void Bilet::setYas(int yas)
		{
			this->yas=yas;
		}
		
		void Bilet::setUyruk(std::string uyruk)
		{
			this->uyruk=uyruk;
		}
		
		
	//SETTER FONKSÝYONLAR BÝTÝÞ
	//GETTER FONKSÝYONLAR
	
	
		std::string Bilet::getAd(){
			return ad;
		}
		
		std::string Bilet::getSoyad(){
			return soyad;
		}
		
		std::string Bilet::getCinsiyet(){
			return cinsiyet;
		}
		
	
		std::string Bilet::getUyruk(){
			return uyruk;
		}
		
		int  Bilet::getYas(){
			return yas;
		}	
			
		int Bilet::getRezervasyonKodu(){
			return rezervasyonKodu;
		}
		
		int Bilet::getFiyat(){
			return fiyat;
		}
		
			//GETTER FONKSÝYONLAR BÝTÝÞ

		void Bilet::FiyatHesap(){
			fiyat=500;
			
			if(yas<18){
				fiyat+=100;
			}else{
				fiyat+=200;
			}
			
			if(KoltukSinifi==1){
				fiyat+=300;
			}else{
				fiyat+=100;
			}
			if(aktarma2==1){
				fiyat-=400;
			}
		}
	

		void Bilet::RezervasyonAl(){
			int q,w;
			ofstream file;
			ofstream Gecici;
			file.open("Bilet.txt",ios::app);
			ifstream UcakDosya;
			UcakDosya.open("Ucak.txt");
			
			int secim;
			std::string Nereden2,Nereye2;
			for(int i=0;i<10;i++){
  	cout<<"\t\t\t\t\t\t\t\t"<<i+1<<"-"<<Sehirler[i]<<endl<<endl;
  }
			cout<<"\t\t\t\t\t\t\t\tIstikamet Seciniz"<<endl<<endl;
			cout<<"\t\t\t\t\t\t\t\t\tNereden: ";
			cin>>q;
			
			cout<<"\n\t\t\t\t\t\t\t\t\tNereye: ";
			cin>>w;
		
	Nereden2=Sehirler[q-1];
	Nereye2=Sehirler[w-1];
			int Ucusno2;
			string Nereden3;
			string Nereye3;
			string KalkisTarihi2;
			string KalkisTarihi3;
			bool aktarma;
			int rotano;
			system("cls");
			std::cout<<"\t\t\t\t\t\t\t\t===============================================================================\n";
			std::cout<<"\t\t\t\t\t\t\t\tUCUS NO       NEREDEN      NEREYE      KALKIS TARIHI          AKTARMA DURUMU "<<std::endl;
			std::cout<<"\t\t\t\t\t\t\t\t===============================================================================\n\n";
			
			while(UcakDosya>>Ucusno2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma>>rotano){
		
				
				for(int count=0;count<20;count++){
					UcakDosya>>Koltuklar[count];
				}
	
				if(Nereden3==Nereden2 && Nereye3==Nereye2){
					if(aktarma==0){
		cout<<"\t\t\t\t\t\t\t\t   "<<Ucusno2<<"       "<<Nereden3<<"      "<<Nereye3<<"      "<<KalkisTarihi2<<"\t     Aktarma yok!"<<endl;
	}else{
		cout<<"\t\t\t\t\t\t\t\t   "<<Ucusno2<<"       "<<Nereden3<<"      "<<Nereye3<<"      "<<KalkisTarihi2<<"\t     Aktarma var.Rota no: "<<rotano<<endl;
	}
				}
		
			}	
			UcakDosya.close();
			UcakDosya.open("Ucak.txt");
				
			cout<<"\n\n\t\t\t\t\t\t\t\t\tBiletini alacaginiz ucagin ucus numarasini seciniz: ";
			int ucusSecim;
			cin>>ucusSecim;
				while(UcakDosya>>Ucusno2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma>>rotano){
		
				
				for(int count=0;count<20;count++){
					UcakDosya>>Koltuklar[count];
				}
	
				if(ucusSecim==Ucusno2){
					aktarma2=aktarma;
					SecilenUcusNo=ucusSecim;
					KalkisTarihi3=KalkisTarihi2;
					int a;
			system("CLS");
					cout<<"\n\t\t\t\t\t\t\t\t1-First Class\n\t\t\t\t\t\t\t\t2-Economy Class\n\t\t\t\t\t\t\t\tKoltuk sinifini seciniz: ";//\n2-Business Class
					cin>>a;
					while(a<1 || a>2){
						cout<<"\t\t\t\t\t\tLutfen 1 yada 2 degerini giriniz: ";
						cin>>a;
					}
				
					if(a==1)
					{
						KoltukSinifi=a;
						
					}
					if(a==2)
					{
						KoltukSinifi=a;
					}
			
			for(int i=0;i<20;i++){
				cout<<"\t\t\t\t\t\t\t\t"<<Koltuklar[i]<<endl;
			}
			
				int b;
			
			cout<<"\t\t\t\t\t\t\t\tKoltuk seciniz: ";
			cin>>b;
			
			
			while(b<0 && b>20){
				cout<<"\t\t\t\t\t\tLutfen Koltuk Numarasini Dogru Sekilde Giriniz: ";
				cin>>b;
			
			}
				if(Koltuklar[b-1]==0){
					cout<<"\t\t\t\t\t\tBu koltuk Alinmistir Baska Koltuk Seciniz: ";
					cin>>b;
				}
				
				if(Koltuklar[b-1]!=0){
				secilenKoltuk=b;
				
				UcakDosya.close();
				Gecici.open("Gecici.txt",ios::app);
				UcakDosya.open("Ucak.txt",ios::app);

		
		
		
				while(UcakDosya>>Ucusno2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma>>rotano){
		
					
					for(int count=0;count<20;count++){
						UcakDosya>>Koltuklar[count];
					}
	
					if(ucusSecim==Ucusno2){
						Gecici<<endl<<Ucusno2<<endl<<Nereden3<<endl<<Nereye3<<endl<<KalkisTarihi2<<endl<<aktarma<<endl<<rotano<<endl;
						for(int count=0;count<20;count++){
							Koltuklar[b-1]=0;
							Gecici<<Koltuklar[count]<<endl;
							
						}			
					}else{
						Gecici<<endl<<Ucusno2<<endl<<Nereden3<<endl<<Nereye3<<endl<<KalkisTarihi2<<endl<<aktarma<<endl<<rotano<<endl;
						for(int count=0;count<20;count++){
							Gecici<<Koltuklar[count]<<endl;
						}
					}
		
				}
				Gecici.close();
				UcakDosya.close();
	
	remove("Ucak.txt");
	rename("Gecici.txt","Ucak.txt");
		
			cout<<"\n\t\t\t\t\t\t\tKisi bilgilerini giriniz...\n\n";
			cout<<"\t\t\t\t\t\t\t\t\tAdi: ";
			cin>>ad;
			cout<<"\t\t\t\t\t\t\t\t\tSoyadi: ";
			cin>>soyad;
			cout<<"\t\t\t\t\t\t\t\t\tCinsiyeti(E/K): ";
			cin>>cinsiyet;
			cout<<"\t\t\t\t\t\t\t\t\tYasi: ";
			cin>>yas;
			cout<<"\t\t\t\t\t\t\t\t\tUyruk: ";
			cin>>uyruk;
			
					srand(time(NULL));
					
					rezervasyonKodu=rand()%1000;
					rezervasyonSifre=10000+rand()%99999;
					cout<<"\t\t\t\t\t\t\t\tRezervasyon kodunuz "<<rezervasyonKodu<<" ve rezervasyon sifreniz "<<rezervasyonSifre<<",lutfen kaydediniz!!"<<endl;
					
	}
		    	
	}
	
			}	
		
		FiyatHesap();
		file<<endl<<SecilenUcusNo<<endl<<secilenKoltuk<<endl<<KoltukSinifi<<endl<<ad<<endl<<soyad<<endl<<cinsiyet<<endl<<yas<<endl<<uyruk<<endl<<rezervasyonKodu<<endl<<rezervasyonSifre<<endl<<fiyat<<endl<<SecilenUcusNo<<endl<<Nereden2<<endl<<Nereye2<<endl<<KalkisTarihi3<<endl<<aktarma2<<endl;
		}



		void Bilet::ArananRezervasyonuGoster(int biletkodu,int biletsifre){
	
				ifstream Biletdosya;
				Biletdosya.open("Bilet.txt");
				
				int UcusNo2;
				string Nereden3;
				string Nereye3;
				string KalkisTarihi2;
			
				if ( Biletdosya.is_open() ){
				
					while(Biletdosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){
							if(biletkodu==rezervasyonKodu&&biletsifre==rezervasyonSifre){
								if (KoltukSinifi==2){
		    cout<<"\n\n\t\t\t\t    ______________[ AAA HAVAYOLLARI ]______________          \n"<<endl;
			cout<<"\t\t\t\t\t\t UÇUÞ REZERVASYON DETAYI"<<endl;
			cout<<"\n\t\t\t|"<<"Rezervasyon Numarasý: "<<rezervasyonKodu<<"\n|Rezervasyon Sifre: "<<rezervasyonSifre<<"\n|Ekonomi Class"<<"\n\t\t\t|___________________________________________________________________"<<endl;
			cout<<"\t\t\t     KÝÞÝ DETAYI"<<endl;

			cout<<"\t\t\t|Yolcu Adi:  "<<ad<<" "<<soyad<<endl;
			cout<<"\t\t\t|Yolcu Yasi:  "<<yas<<endl;
			cout<<"\t\t\t|Yolcu Cinsiyeti:  "<<cinsiyet<<endl;
			cout<<"\t\t\t|Yolcu Uyrugu:  "<<uyruk<<endl;
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     UÇUÞ DETAYI"<<endl;
			cout<<"\t\t\t|Ucus Numarasý:  "<<UcusNo2<<endl;
			cout<<"\t\t\t|Ucus Tarihi:  "<<KalkisTarihi2<<endl;
			cout<<"\t\t\t|Nereden:  "<<Nereden3<<endl;
			cout<<"\t\t\t|Nereye:  "<<Nereye3<<endl;
			cout<<"\t\t\t|Koltuk Numarasi:  "<<secilenKoltuk<<endl;
			if(aktarma2==0){
			cout<<"\t\t\t|Aktarma Durumu: Aktarmasýz"<<endl;
			}else{
			cout<<"\t\t\t|Aktarma Durumu: Aktarmalý"<<endl;	
			}
		
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<< "\t\t\tFiyat: "<<fiyat<<"TL"<<endl;


	}else{
		
			cout<<"\n\n\t\t\t\t    ______________[ AAA HAVAYOLLARI ]______________          \n"<<endl;
			cout<<"\t\t\t\t\t\t UÇUÞ REZERVASYON DETAYI"<<endl;
			cout<<"\n\t\t\t|"<<"Rezervasyon Numarasý: "<<rezervasyonKodu<<"\n\t\t\t|Rezervasyon Sifre: "<<rezervasyonSifre<<"\n\t\t\t|First Class"<<"\n\t\t\t|___________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     KÝÞÝ DETAYI"<<endl;

			cout<<"\t\t\t|Yolcu Adi:  "<<ad<<" "<<soyad<<endl;
			cout<<"\t\t\t|Yolcu Yasi:  "<<yas<<endl;
			cout<<"\t\t\t|Yolcu Cinsiyeti:  "<<cinsiyet<<endl;
			cout<<"\t\t\t|Yolcu Uyrugu:  "<<uyruk<<endl;
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     UÇUÞ DETAYI"<<endl;
			cout<<"\t\t\t|Ucus Numarasý:  "<<UcusNo2<<endl;
			cout<<"\t\t\t|Ucus Tarihi:  "<<KalkisTarihi2<<endl;
			cout<<"\t\t\t|Nereden:  "<<Nereden3<<endl;
			cout<<"\t\t\t|Nereye:  "<<Nereye3<<endl;
			cout<<"\t\t\t|Koltuk Numarasi:  "<<secilenKoltuk<<endl;
			if(aktarma2==0){
			cout<<"\t\t\t|Aktarma Durumu: Aktarmasýz"<<endl;
			}else{
			cout<<"\t\t\t|Aktarma Durumu: Aktarmalý"<<endl;	
			}
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<< "\t\t\tFiyat: "<<fiyat<<"TL"<<endl;
		
	}		
					
								
							
				}
					
					
					}
			Biletdosya.close();
  }
	
				
			
	
		}
		
		void Bilet::ArananRezervasyonuSil(int biletkodu,int biletsifre){				
				string a;		
				int UcusNo2;
				string Nereden3;
				string Nereye3;
				string KalkisTarihi2;
				ofstream Gecici;
				ifstream Biletdosya;
				Gecici.open("Gecici.txt",ios::app);

			
				Biletdosya.open("Bilet.txt");
					while(Biletdosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){
				if(biletkodu==rezervasyonKodu&&biletsifre==rezervasyonSifre){
					cout<<"\t\t\t\t\t\tAdi: "<<ad<<endl<<"\t\t\t\t\t\tSoyadi: "<<soyad<<endl<<"\t\t\t\t\t\tSecilen Ucus Numarasi: "<<SecilenUcusNo<<endl<<"\t\t\t\t\t\tSecilen Koltuk Numarasi: "<<secilenKoltuk<<endl<<"\t\t\t\t\t\tRezervasyon Numarasi: "<<rezervasyonKodu<<endl<<endl;
				}
				

				}
					cout<<"\t\t\t\t\t\tRezervasyonu silmek için 1'e basýnýz: ";
			cin>>a;
			
			if(a=="1"){
			Biletdosya.close();
			Biletdosya.open("Bilet.txt");

				while(Biletdosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){
				if(biletkodu==rezervasyonKodu&&biletsifre==rezervasyonSifre){
					cout<<"\n\t\t\t\t\t\tRezervasyon Silinmistir,iyi gunler...";
				}
		
				
				
				
				Gecici.close();
	Biletdosya.close();
	
	remove("Bilet.txt");
	rename("Gecici.txt","Bilet.txt");
			
	}
}
}
		
		
void Bilet::ArananRezervasyonuSilY(int biletkodu){
				int  a;		
				int UcusNo2;
				string Nereden3;
				string Nereye3;
				string KalkisTarihi2;
				ofstream Gecici;
				ifstream Biletdosya;
				Gecici.open("Gecici.txt",ios::app);

			
				Biletdosya.open("Bilet.txt");
					while(Biletdosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){
				if(biletkodu==rezervasyonKodu){
					cout<<"\t\t\t\t\t\tAdi: "<<ad<<endl<<"\t\t\t\t\t\tSoyadi: "<<soyad<<endl<<"\t\t\t\t\t\tSecilen Ucus Numarasi: "<<SecilenUcusNo<<endl<<"\t\t\t\t\t\tSecilen Koltuk Numarasi: "<<secilenKoltuk<<endl<<"\t\t\t\t\t\tRezervasyon Numarasi: "<<rezervasyonKodu<<endl<<endl;
				}
				
					cout<<"\t\t\t\t\t\tRezervasyonu silmek için 1'e basýnýz: ";
			cin>>a;
						Biletdosya.close();

			if(a==1){
			Biletdosya.open("Bilet.txt");

				while(Biletdosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){
				if(biletkodu==rezervasyonKodu){
					cout<<"\n\t\t\t\t\t\tRezervasyon Silinmistir,iyi gunler...";
				}else{
				Gecici<<endl<<SecilenUcusNo<<endl<<secilenKoltuk<<endl<<KoltukSinifi<<endl<<ad<<endl<<soyad<<endl<<cinsiyet<<endl<<yas<<endl<<uyruk<<endl<<rezervasyonKodu<<endl<<rezervasyonSifre<<endl<<fiyat<<endl<<SecilenUcusNo<<endl<<Nereden3<<endl<<Nereye3<<endl<<KalkisTarihi2<<endl<<aktarma2<<endl;
				}


				}
				
					
				Gecici.close();
	Biletdosya.close();
	
	remove("Bilet.txt");
	rename("Gecici.txt","Bilet.txt");
				
				}
				}

				
				
		
		
			}
			
		
	
		
		void Bilet::RezervasyonlarGoster(){
			int reno;
			int UcusNo2;
			string Nereden3;
			string Nereye3;
			string KalkisTarihi2;
			ifstream BiletDosya;
			BiletDosya.open("Bilet.txt");
			cout<<"\t\t\t\t\t\t\t\t===========================================================\n";
			cout<<"\t\t\t\t\t\t\t\tAD-SOYAD     UCUS NO     KOLTUK NO       REZERVASYON KODU  "<<endl;
			cout<<"\t\t\t\t\t\t\t\t===========================================================\n";
		while(BiletDosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){

			cout<<"\t\t\t\t\t\t\t\t"<<ad<<" "<<soyad<<"       "<<SecilenUcusNo<<"\t\t"<<secilenKoltuk<<"\t\t"<<rezervasyonKodu<<endl;
			
			
}
	cout<<"\n\t\t\t\t\t\tDetaylarini gormek istediginiz rezervasyonun kodunu giriniz: ";
			cin>>reno;
			system("cls");
		BiletDosya.close();
		BiletDosya.open("Bilet.txt");
		while(BiletDosya>>SecilenUcusNo>>secilenKoltuk>>KoltukSinifi>>ad>>soyad>>cinsiyet>>yas>>uyruk>>rezervasyonKodu>>rezervasyonSifre>>fiyat>>UcusNo2>>Nereden3>>Nereye3>>KalkisTarihi2>>aktarma2){

		
				if(reno==rezervasyonKodu){
						if (KoltukSinifi==2){
		    cout<<"\n\n\t\t\t\t    ______________[ AAA HAVAYOLLARI ]______________          \n"<<endl;
			cout<<"\t\t\t\t\t\t UÇUÞ REZERVASYON DETAYI"<<endl;
			cout<<"\n\t\t\t|"<<"Rezervasyon Numarasý: "<<rezervasyonKodu<<"\n\t\t\t|Rezervasyon Sifre: "<<rezervasyonSifre<<"\n\t\t\t|Ekonomi Class"<<"\n\t\t\t|___________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     KÝÞÝ DETAYI"<<endl;

			cout<<"\t\t\t|Yolcu Adi:  "<<ad<<" "<<soyad<<endl;
			cout<<"\t\t\t|Yolcu Yasi:  "<<yas<<endl;
			cout<<"\t\t\t|Yolcu Cinsiyeti:  "<<cinsiyet<<endl;
			cout<<"\t\t\t|Yolcu Uyrugu:  "<<uyruk<<endl;
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     UÇUÞ DETAYI"<<endl;
			cout<<"\t\t\t|Ucus Numarasý:  "<<UcusNo2<<endl;
			cout<<"\t\t\t|Ucus Tarihi:  "<<KalkisTarihi2<<endl;
			cout<<"\t\t\t|Nereden:  "<<Nereden3<<endl;
			cout<<"\t\t\t|Nereye:  "<<Nereye3<<endl;
			cout<<"\t\t\t|Koltuk Numarasi:  "<<secilenKoltuk<<endl;
				if(aktarma2==0){
			cout<<"\t\t\t|Aktarma Durumu: Aktarmasýz"<<endl;
			}else{
			cout<<"\t\t\t|Aktarma Durumu: Aktarmalý"<<endl;	
			}
			cout<<"_____________________________________________________________________"<<endl;
			cout<< "\t\t\tFiyat: "<<fiyat<<"TL"<<endl;


	}else{
		
			cout<<"\n\n\t\t\t\t    ______________[ AAA HAVAYOLLARI ]______________          \n"<<endl;
			cout<<"\t\t\t\t\t\t UÇUÞ REZERVASYON DETAYI"<<endl;
			cout<<"\n\t\t\t|"<<"Rezervasyon Numarasý: "<<rezervasyonKodu<<"\n\t\t\t|Rezervasyon Sifre: "<<rezervasyonSifre<<"\n\t\t\t|First Class"<<"\n\t\t\t|___________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     KÝÞÝ DETAYI"<<endl;

			cout<<"\t\t\t|Yolcu Adi:  "<<ad<<" "<<soyad<<endl;
			cout<<"\t\t\t|Yolcu Yasi:  "<<yas<<endl;
			cout<<"\t\t\t|Yolcu Cinsiyeti:  "<<cinsiyet<<endl;
			cout<<"\t\t\t|Yolcu Uyrugu:  "<<uyruk<<endl;
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<<"\t\t\t\t\t\t     UÇUÞ DETAYI"<<endl;
			cout<<"\t\t\t|Ucus Numarasý:  "<<UcusNo2<<endl;
			cout<<"\t\t\t|Ucus Tarihi:  "<<KalkisTarihi2<<endl;
			cout<<"\t\t\t|Nereden:  "<<Nereden3<<endl;
			cout<<"\t\t\t|Nereye:  "<<Nereye3<<endl;
			cout<<"\t\t\t|Koltuk Numarasi:  "<<secilenKoltuk<<endl;
				if(aktarma2==0){
			cout<<"\t\t\t|Aktarma Durumu: Aktarmasýz"<<endl;
			}else{
			cout<<"\t\t\t|Aktarma Durumu: Aktarmalý"<<endl;	
			}
			cout<<"\t\t\t_____________________________________________________________________"<<endl;
			cout<< "\t\t\tFiyat: "<<fiyat<<"TL"<<endl;
		
	}		
					
				}
		
	}
			
			
				cout<<endl;
			BiletDosya.close();
	}
		
