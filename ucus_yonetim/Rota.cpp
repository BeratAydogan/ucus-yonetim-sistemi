#include "Rota.h"
#include <iostream>
#include <string>
#include<iomanip>
#include <fstream>
#include "Ucak.h"
#include <vector>
#include <algorithm>
#define INF 99999


int V=10;
Rota::Rota(){}
 int  sure;
int c=0;
int uni;
void Rota::RotaEkle(){
	int uzaklik2[10][10]={{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},
					  {99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},
				   	  {99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},	
				      {99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},
					  {99999,99999,99999,99999,99999,99999,99999,99999,99999,99999},{99999,99999,99999,99999,99999,99999,99999,99999,99999,99999}};
sure=0;
bool gecildi[10]={0};
	int b=0;
	string sehirler[10];
	int dizi[10]={0,0,0,0,0,0,0, 0,0,0};
   for(int i=0;i<10;i++){ cout<<"\t\t\t\t\t"<<i+1<<"-"<<Ucak().Sehirler[i]<<endl<<endl;}
   cout<<"\t\t\tOlusturmak istediginiz rota icin sehir numaralari giriniz,\n\t\t\teger rotanizi belirlediyseniz 0'a basiniz:";
   for(int i=0;i<10;i++){
   		cin>>dizi[i];
   	
   		if(dizi[i]==0){
   				uni=dizi[0]-1;
   				c=i-1;
   			break;
   			
	    }
   }

 
  		for(int i=0;i<10;i++){
   	for(int j=0;j<10;j++){
	   
 			if(dizi[i]!=0&&dizi[j]!=0){
			 
 			uzaklik2[i][j]=Ucak().Uzakliklar[dizi[i]-1][dizi[j]-1];
 			if(i==j){
 				uzaklik2[i][j]=0;
			 }
			 }
		 } 	
   }
  TSP(uni,gecildi,uzaklik2,sehirler,b, dizi);

   cout<<endl<<endl;
   
   cout<<"Girilen sehirlerden olusturululan en kýsa yola sahip rota: "<<endl;
   for(int i=0;i<10;i++){
   	if(sehirler[i]!="\0"){
   		   cout<<"->"<<sehirler[i];

	   }else{
	   	sehirler[i]="0";
	   } 
   }
  cout<<endl<<"Rotanýn yol mesafesi: "<<sure<<endl<<endl;
  
  DosyayaYaz(sehirler);
}


int Rota:: find_next_node(int node, bool gecildi[],int graph[][10]){
	
	int nd,min=INF,min_index=INT_MAX,democost;
	for(int i=0;i<10;i++){
		if(gecildi[i]!=1  &&graph[node][i]!=0 &&graph[node][i]<min){
			democost=graph[node][i];
			min=graph[node][i];
			min_index=i;
			
		}
	}
	nd=min_index;

	return nd;
}

	void Rota::TSP(int dugum ,bool gecildi[],int graph[][10],string sehirler[],int b,int dizi[]){
		int next_node;
		gecildi[dugum]=1;
		
			sehirler[b]=Ucak().Sehirler[dizi[dugum]-1];
		
			int gecici=next_node;
		next_node=find_next_node(dugum ,gecildi,graph);
	
		if(next_node!=INT_MAX){
			int v=0;
			sure+=graph[next_node][dugum];
		}else return;
		
		b++;

		TSP(next_node,gecildi,graph,sehirler, b, dizi);
		
	
	}




void Rota::DosyayaYaz(string dizi[]){
	ofstream Dosya;
	Dosya.open("Rota.txt",ios::app);
	int a,no;
	
	cout<<"Rotayi Listenize Eklemek Icin 1'i Tuslayiniz: ";
	cin>>a;

	if(a==1){
		cout<<"Rota numarasini giriniz: ";
	cin>>no;
		Dosya<<no<<endl;
		for(int i=0;i<10;i++){
	
			Dosya<<dizi[i]<<endl;
			
		}
		Dosya<<sure<<endl<<endl;
	}
}




                   







void Rota::RotaGoster(){
	
	ifstream Dosya;
	Dosya.open("Rota.txt");
	int no,mesafe;
	string a,b,c,d,e,f,g,h,j,k;
	cout<<"\n\n\n\t\t\t\t\t\t\t     ROTALAR\n\n";
	cout<<"   Rota No"<<"\t\t\t\t\t\t\t\t\t\t\t"<<"Mesafe(km)"<<endl;
	cout<<"_____________________________________________________________________________________________________________"<<endl<<endl;
	while(Dosya>>no>>a>>b>>c>>d>>e>>f>>g>>h>>j>>k>>mesafe){
		cout<<"    "<<no<<"\t\t\t"<<a<<"->"<<b<<"->"<<c<<"->"<<d<<"->"<<e<<"->"<<f<<"->"<<g<<"->"<<h<<"->"<<j<<"->"<<k<<"\t\t\t"<<mesafe<<endl<<endl;
		
	}
	
	
}

void Rota::RotaSil(){
	Rota().RotaGoster();
	int no2;
	cout<<"\t\t\t\tSilmek istediginiz rotanin numarasini giriniz:" ;
	cin>>no2;
int no,mesafe;
	string a,b,c,d,e,f,g,h,j,k;
		ofstream Gecici;
ifstream Acma;
Gecici.open("Gecici.txt",ios::app);
Acma.open("Rota.txt",ios::app);

	while(Acma>>no>>a>>b>>c>>d>>e>>f>>g>>h>>j>>k>>mesafe){
		if(no2==no){
			cout<<"\n\t\t\t\tRota Silinmistir...";
		}else{
			Gecici<<no<<endl<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<g<<endl<<h<<endl<<j<<endl<<k<<endl<<mesafe<<endl<<endl;
		}
	}
	Gecici.close();
	Acma.close();
	
	remove("Rota.txt");
	rename("Gecici.txt","Rota.txt");
}

