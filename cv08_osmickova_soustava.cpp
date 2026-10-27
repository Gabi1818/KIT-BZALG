#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int X, Y;
    string cislo = "";
    cout << "zadej cislo: ";
    cin >> X;
    
    do{
        Y = X % 8;
        X = X / 8;
        cislo += to_string(Y);
        //cout << Y;
    } while (X != 0);
    
    reverse(cislo.begin(), cislo.end());
    cout << cislo;

    return 0;
}
