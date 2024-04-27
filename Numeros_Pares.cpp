#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5;
    int NumPar = 0;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    num1 % 2 == 0 ? NumPar++ : NumPar;
    num2 % 2 == 0 ? NumPar++ : NumPar;
    num3 % 2 == 0 ? NumPar++ : NumPar;
    num4 % 2 == 0 ? NumPar++ : NumPar;
    num5 % 2 == 0 ? NumPar++ : NumPar;
    cout << NumPar << " valores pares\n";

    return 0;
}