#pragma once
#include <iostream> 
#include <string>
using namespace std;

class CarNumber
{
	string number;

	static int counter;
	static char firstLetter;
	static char SecondLetter;

public:
	CarNumber(string);
	string getNumber()const;
	static void showStatic();


};

