#include <iostream>
#include "include/tendik.hpp"
 
 using namespace std;

tendik::tendik(string id, string nama, int dd, int mm, int yy, string npp, string unit)
		: person(id, nama, dd, mm, yy), npp(npp), unit(unit)
{
}

void tendik::setUnit(string unit)
{
	this->unit = unit;
}

string tendik::getUnit()
{
	return this->unit;
}

string tendik::getNPP()
{
	return this->npp;
}
