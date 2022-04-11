#include <iostream>
#include <vector>
#include "include/mahasiswa.hpp"

using namespace std;


mahasiswa::mahasiswa(string id, string nama, int dd, int mm, int yy, 
				string nrp, string departemen,string fakultas, int tahunmasuk)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), fakultas(fakultas), tahunmasuk(tahunmasuk)
{
}


string mahasiswa::getNRP()
{
	return this->nrp;
}

void mahasiswa::setDepartemen(string departemen)
{
	this->departemen = departemen;
}

string mahasiswa::getDepartemen()
{
	return this->departemen;
}

void mahasiswa::setFakultas(string fakultas)
{
	this->fakultas = fakultas;
}
string mahasiswa::getFakultas()
{
	return this->fakultas;
}

int mahasiswa::getTahunMasuk()
{
	return this->tahunmasuk;
}
