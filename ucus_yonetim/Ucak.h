#ifndef UCAK_H
#define UCAK_H
#include <string>

using namespace std;
class Ucak {
	
	private:	 
		int UcusNo;
		int binisSaati;
		std::string Nereden;
		std::string Nereye;
		std::string KalkisTarihi;
		int secilenUcak; 
		bool aktarma;
		int rotaNo;

		

		
	public:
			int Koltuklar[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
			string Sehirler[10]={"Istanbul","Ankara","Adana","Izmir","Antalya","Manisa","Muðla","Malatya","Sivas","Nevsehir"};
			int Uzakliklar[10][10]={{0,357,707,328,482,298,456,852,696,567},{357,0,389,522,386,491,498,479,356,216},
									{707,389,0,736,410,874,605,294,339,118},{328,522,736,0,357,33,205,954,854,659},
									{482,386,410,357,0,347,197,675,635,402},{298,491,874,33,347,0,176,947,836,634},
									{456,498,605,205,197,176,0,871,822,578},{852,479,294,954,675,947,871,0,169,295},
									{696,356,339,854,635,836,822,169,0,235},{567,216,118,659,402,634,578,295,235,0}};


		Ucak();
		Ucak(int UcusNo,std::string Nereden,std::string Nereye,std::string KalkisTarihi);
		
		//Getter-Setterizmmir adana antalya ankara
		void setUcusNo(int UcusNo);
		void setBinisSaati(int binisSaati);
		void setNereden(std::string Nereden);
		void setNereye(std::string Nereye);
		void setKalkisTarihi(std::string KalkisTarihi);
		void setKoltukSinifi(int KoltukSinifi);
		void setSecilenUcak(int secilenUcak);

		int getKoltuklar();
		int getSecilenUcak();
		int getUcusNo();
		int getBinisSaati();
		std::string getNereden();
		std::string  getNereye();
		std::string  getKalkisTarihi();
		//Getter-Setter Bitiþ
	
		
		void UcaklariGoster();		
		void UcakEkle();
		void UcakSil();
};

#endif
