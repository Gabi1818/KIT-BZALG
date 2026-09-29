#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float A;
    float B;
    
    cout << "zadej cislo: ";
    cin >> A;
    
    if (A >= 0)
    {
        B = sqrt(A);
        cout << B;
    }
    else
    {
        cout << "zadano zaporne cislo";
    }
}
