#include "Ucak.h"
#include<iostream>
#include <string>
#include<iomanip>
#include <fstream>
#include "Rota.h"
using namespace std;

ofstream Dosya;

//Kurucu Fonksiyonlar
Ucak::Ucak()
{
	UcusNo=0;
	Nereden="";
	Nereye="";
	KalkisTarihi="";
	aktarma=0;

}

Ucak::Ucak(int UcusNo,std::string Nereden,std::string Nereye,std::string KalkisTarihi)
{
	this->UcusNo=UcusNo;
	this->Nereden=Nereden;
	this->Nereye=Nereye;
	this->KalkisTarihi=KalkisTarihi;

}

//SETTER BAï¿½LANGIï¿½ 
		void Ucak::setUcusNo(int UcusNo){
			this->UcusNo=UcusNo;
		}
		
		void Ucak::setBinisSaati(int binisSaati){
			this->binisSaati=binisSaati;
		}
		void Ucak::setNereden(std::string Nereden){
			this->Nereden=Nereden;
		}
		void Ucak::setNereye(std::string Nereye){
			this->Nereye=Nereye;
		}
		void Ucak::setKalkisTarihi(std::string KalkisTarihi){
			this->KalkisTarihi=KalkisTarihi;
		}
	
		void Ucak::setSecilenUcak(int secilenUcak){
			this->secilenUcak=secilenUcak;
		}


	
//SETTER Bï¿½Tï¿½ï¿½

//GETTER BAï¿½LANGIï¿½
	

		int Ucak::getSecilenUcak(){
			return secilenUcak;
		}
	
		int Ucak::getUcusNo(){
			return UcusNo;
		}
		int Ucak::getBinisSaati(){
			return binisSaati;
		}
		std::string Ucak::getNereden(){
			return Nereden;
		}
		std::string  Ucak::getNereye(){
			return Nereye;
		}
		std::string  Ucak::getKalkisTarihi(){
			return KalkisTarihi;
			
		}
		
		
		

//GETTER Bï¿½Tï¿½ï¿½



void Ucak::UcaklariGoster(){
	ifstream Dosya;
	Dosya.open("Ucak.txt");

	if ( Dosya.is_open() ){
	std::cout<<"\t\t\t\t\t===============================================================================\n";
	std::cout<<"\t\t\t\t\tUCUS NO       NEREDEN      NEREYE      KALKIS TARIHI          AKTARMA DURUMU "<<std::endl;
	std::cout<<"\t\t\t\t\t===============================================================================\n";
	std::cout<<std::endl;
	
   if(Dosya.is_open())
	{
		while(Dosya>>UcusNo>>Nereden>>Nereye>>KalkisTarihi>>aktarma>>rotaNo)
		{
	for(int count=0;count<20;count++){
		Dosya>>Koltuklar[count];
	}
	if(aktarma==0){
		cout<<"\t\t\t\t\t   "<<UcusNo<<"         "<<Nereden<<"     "<<Nereye<<"      "<<KalkisTarihi<<"                Aktarma yok!"<<endl;
	}else{
		cout<<"\t\t\t\t\t   "<<UcusNo<<"       "<<Nereden<<"      "<<Nereye<<"      "<<KalkisTarihi<<"           Aktarma var.Rota no: "<<rotaNo<<endl;
	}
	
			}
	}
	else
	{
		cout<<"Gosterilecek Ucak Yok!"<<endl;
	}

    Dosya.close();
  }
	
}



	
		
void Ucak::UcakEkle(){
	Dosya.open("Ucak.txt",ios::app);
int q,w,e;
	if(!Dosya) { 
    cout << "\t\t\t\tCannot open file.\n"; 
  }
  	cout<<"\t\t\t\tUcak numarasini giriniz: ";
	cin>>UcusNo;
   for(int i=0;i<10;i++){ cout<<"\t\t\t\t\t"<<i+1<<"-"<<Sehirler[i]<<endl;  }
   cout<<"\t\t\t\tHazýr rota secmek icin 0 giriniz,istemiyorsaniz baska bir sayi tuslayiniz: ";
   cin>>e;
	if(e!=0){
		aktarma=0;
		cout<<"\t\t\t\tUcak kalkis yerini seciniz: ";
		cin>>q;
		cout<<"\t\t\t\tUcak inis yerini seciniz: ";
		cin>>w;
				Nereden=Sehirler[q-1];
				Nereye=Sehirler[w-1];
			
			cout<<"\t\t\t\tKalkis tarihini giriniz: ";
			cin>>KalkisTarihi;

			for(int a=0;a<20;a++){
				Koltuklar[a]=a+1;
			}
			Dosya<<endl<<UcusNo<<endl<<Nereden<<endl<<Nereye<<endl<<KalkisTarihi<<endl<<aktarma<<endl<<0<<endl;
			for(int count=0;count<20;count++){
			Dosya<<Koltuklar[count]<<endl;
			}
	
			Dosya.close();
	}else{
		aktarma=1;
		Rota().RotaGoster(); 
	int no2;
	cout<<"\t\t\t\tSecmek istediginiz rotanin numarasini giriniz:" ;
	cin>>no2;
int no,mesafe;
	string dizi[10];
	cout<<"\t\t\t\tKalkis tarihini giriniz: ";
			cin>>KalkisTarihi;
ifstream Acma;
Acma.open("Rota.txt",ios::app);

	while(Acma>>no>>dizi[0]>>dizi[1]>>dizi[2]>>dizi[3]>>dizi[4]>>dizi[5]>>dizi[6]>>dizi[7]>>dizi[8]>>dizi[9]>>mesafe){
		if(no2==no){
			for(int i=0;i<10;i++){
				if(dizi[i]=="0"){
					rotaNo=no2;
						Dosya<<endl<<UcusNo<<endl<<dizi[0]<<endl<<dizi[i-1]<<endl<<KalkisTarihi<<endl<<aktarma<<endl<<rotaNo<<endl;
						for(int count=0;count<20;count++){
						Dosya<<Koltuklar[count]<<endl;
			}
						break;
				}
				
			}
	
		}
	}

	

	}
	
}

void Ucak::UcakSil(){
	ofstream Gecici;
ifstream Acma;
Gecici.open("Gecici.txt",ios::app);
Acma.open("Ucak.txt",ios::app);

		int ucusno;
		cout<<"Ucak Numarasini Giriniz: ";
		cin>>ucusno;
		
		
	while(Acma>>UcusNo>>Nereden>>Nereye>>KalkisTarihi>>aktarma>>rotaNo){
		
	for(int count=0;count<20;count++){
		Acma>>Koltuklar[count];
	}
	
		if(ucusno==UcusNo){
			if(aktarma==0){
				cout<<"Ucak Numarasi: "<<UcusNo<<endl<<"Nereden: "<<Nereden<<endl<<"Nereye: "<<Nereye<<endl<<"Kalkis Tarihi: "<<KalkisTarihi<<endl<<"Aktarma Durumu: Aktarma yok"<<endl;
			}else{
			cout<<"Ucak Numarasi: "<<UcusNo<<endl<<"Nereden: "<<Nereden<<endl<<"Nereye: "<<Nereye<<endl<<"Kalkis Tarihi: "<<KalkisTarihi<<endl<<"Aktarma Durumu: Aktarma var.No: "<<rotaNo<<endl;	
			}
		
			cout<<"Ucak Silindi...";
		} else
		{
	Gecici<<endl<<UcusNo<<endl<<Nereden<<endl<<Nereye<<endl<<KalkisTarihi<<endl<<aktarma<<endl<<rotaNo<<endl;
	for(int count=0;count<20;count++){
		Gecici<<Koltuklar[count]<<endl;
	}
	}
		
	}
	Gecici.close();
	Acma.close();
	
	remove("Ucak.txt");
	rename("Gecici.txt","Ucak.txt");

	
}
