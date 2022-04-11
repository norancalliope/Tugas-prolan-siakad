#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

using namespace std;

class mahasiswa : public person {
private:
	string nrp;
	string departemen;
	string fakultas;
	int tahunmasuk;


public:
	mahasiswa(string id, string nama, int dd, int mm, int yy,
					string nrp, string departemen, string fakultas ,int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	vector<float> getAllIPS();
	string getNRP();

	void setDepartemen(string departemen);
	string getDepartemen();

	void setFakultas(string fakultas);
	string getFakultas();

	int getTahunMasuk();
};

#endif
