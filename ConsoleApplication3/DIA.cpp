#include "DIA.h"

DIA::DIA()
{
	for (int i = 0; i < 10; i++)
		Cars.push_back(CarNumber("AX"));
}

void DIA::showTable() const
{
	for (int i = 0; i < Cars.size(); i++)
		cout << Cars[i].getNumber() << endl;
}

void DIA::takeCarNumber(string Number)
{
	auto found = find_if(Cars.begin(), Cars.end(), [Number](CarNumber Car) {return Car.getNumber() == Number; });
	if (found == Cars.end())
		cout << "NOT FOUND\n";
	else
	{
		cout << "FOUND  " << found->getNumber() << endl;
		Cars.erase(found);
		Cars.push_back(CarNumber("AX"));
	}
}
