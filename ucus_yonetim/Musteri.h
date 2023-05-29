#ifndef MUSTERI_H
#define MUSTERI_H
#include <string>


class Musteri
{
	private: 
	std::string ad[50];
	std::string cinsiyet;
	int yas;
	std::string cep;  
	std::string uyruk; //buna sonra dönersin 

	
	
	public:
		Musteri();
		void MusteriBilgiAl();
		
};

#endif
