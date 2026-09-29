#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "zadej a: ";
    float a;
    cin >> a;
    cout << "zadej b: ";
    float b;
    cin >> b;
    cout << "zadej c: ";
    float c;
    cin >> c;
    
    float D;
    float x;
    float x1;
    float x2;
    
    
    if (a == 0){
        cout << "neni kvadraticka rovnice";
        x = -c/b;
        cout << "x = ";
        cout << x;
    }
    else if (b == 0){
        if (-c/a >= 0){
            x = sqrt(-c/a);
            cout << "x = ";
            cout << x;
        }
        else{
            cout << "zaporna odmocnina";
        }
    }
    else{
        D = b * b - 4 * a * c;
        if (D >= 0){
            x1 = (-b + sqrt(D) / 2 * a);
            x2 = (-b - sqrt(D) / 2 * a);
            cout << "x1 = ";
            cout << x1;
            cout << "x2 = ";
            cout << x2;
        }
        else{
            cout << "nema reseni";
        }
    }
    

}
