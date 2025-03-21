#pragma once
#include "CarNumber.h"
#include <vector>

class DIA
{
	vector<CarNumber> Cars;

public:
	DIA();
	void showTable()const;
	void takeCarNumber(string Number);
};

