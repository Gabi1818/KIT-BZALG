#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int X, zbytek, i = 0;
    int finalniCislo = 0;
    cout << "zadej cislo: ";
    cin >> X;
    
    
    do{
        zbytek = X % 2;
        //na konci 1
        if (zbytek >= 1){
            finalniCislo += pow(2, i);
        }

        i++;
        X = X / 10;

    } while (X != 0);
    
    cout << finalniCislo;

    return 0;
}
