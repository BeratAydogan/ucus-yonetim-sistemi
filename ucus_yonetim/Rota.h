#ifndef ROTA_H
#define ROTA_H
#include <string>
using namespace std;



class Rota
{
	public:
	
		Rota();
		void enkisayol();
		void RotaEkle();
		void RotaSil();
		
		void RotaGoster();
		void DosyayaYaz(string dizi[]);
		void TSP(int dugum ,bool gecildi[],int graph[][10],string sehirler[],int b,int dizi[]);
		int	find_next_node(int node, bool gecildi[],int graph[][10]);
};

#endif        
