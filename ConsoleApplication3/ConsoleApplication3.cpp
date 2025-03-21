#include "CarNumber.h"
#include <vector>
#include "DIA.h"
#include "MyMath.h"

int main() {
    cout << "PI: " << MyMath::PI() << endl;
    cout << "+: " << MyMath::add(1, 1) << endl;
    cout << "-: " << MyMath::sub(4, 1) << endl;
    cout << "*: " << MyMath::mult(4, 2) << endl;
    cout << "/: " << MyMath::div(4, 2) << endl;
    cout << "Rand: " << MyMath::random(1, 10) << endl;
    cout << "Abs: " << MyMath::abs(-17) << endl;
    cout << "ceil: " << MyMath::round(17.9) << endl;
    cout << "floor: " << MyMath::floor(17.9) << endl;
    cout << "min: " << MyMath::min(4, 2) << endl;
    cout << "max: " << MyMath::max(4, 2) << endl;
    cout << "pow: " << MyMath::pow(2, 3) << endl;

    return 0;
}
