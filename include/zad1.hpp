#pragma once

#include "catch.hpp"

#include <ostream>
#include <sstream>
#include <string>

// tutaj klasa Artysta
class Artysta	//podaj nazwe klasy
{
public:
	Artysta():pseudonim("Anonim"), mls(0) {}
	Artysta(const string& a, unsigned b) :pseudonim(a), mls(b) {}
	void graj(std::ostream& o) const 
	{
		stream << pseudonim<<": "<<mls;
	}
	const string& getPseudonim(std::ostream& o) const { return pseudonim; }
	unsigned getSluchacze() const { return mls; }
private:
	string pseudonim;
	unsigned mls;	//miesieczna liczba sluchaczy
};
