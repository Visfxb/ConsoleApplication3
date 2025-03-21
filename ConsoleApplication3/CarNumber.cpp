#include "CarNumber.h"

CarNumber::CarNumber(string region)
{
    counter++;
    if (counter > 9999)
    {
        counter = 1;
        SecondLetter++;
        if (SecondLetter > 'Z')
        {
            SecondLetter = 'A';
            firstLetter++;
        }
    }
    number = region + to_string(counter / 1000) + to_string(counter / 100 % 10)
        + to_string(counter / 10 % 10) + to_string(counter % 10)
        + firstLetter + SecondLetter;
}

string CarNumber::getNumber() const
{
    return number;
}

void CarNumber::showStatic()
{
    cout << counter << " " << firstLetter << SecondLetter << endl;}
