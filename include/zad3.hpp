#pragma once

#include "zad1.hpp"

//tutaj szablon ArtystaPlusInstrument
template <typename T>
class ArtystaPlusInstrument
{
public:
	ArtystaPlusInstrument(const Artysta& aa, const T& bb) :a(aa),i(bb) {}
	unsigned koncert()
	{
		i.liczbaUczestnikow(a);
	}
private:
	Artysta a;
	T i;
};
