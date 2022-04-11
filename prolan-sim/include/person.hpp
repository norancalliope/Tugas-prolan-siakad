#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>

using namespace std;

class person {
private:
	string id;
	string nama;
	int dd, mm, yy;

public:
	person(string id, string nama, int dd, int mm, int yy);

	void setId(string id);
	string getId();

	void setNama(string nama);
	string getNama();

	void setTglLahir(int dd, int mm, int yy);
	int getTglLahir();
	int getBulanLahir();
	int getTahunLahir();	
};


#endif
