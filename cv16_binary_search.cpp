#include <iostream>
using namespace std;

int main()
{
    int arr[]={3, 7, 10, 11, 15, 20, 30, 48, 99, 102, 105, 108, 120, 130, 133, 141, 150};
    int a=0;
    int b=17/2;
    int c=17;
    int x;
    
    cout << "Zadej cislo: ";
    cin >> x;
    /** puleni intervalu **/
    
    while(a!=b) {
        // pokud je (nahodou) na rozpulenem miste hledana hodnota
        if(x==arr[b]) break;
            // puleni intervalu
            
        if(x<arr[b]) {
            cout << "<" << " "; // probiha puleni smerem doleva
            c = b;
            b = a+(b-a)/2;
        } else {
            cout << ">" << " "; // probiha puleni smerem doprava
            a = b;
            b = b+(c-b)/2;
        }
    }    
    
    /** tiskni **/
    cout << endl;
    if (arr[b] == x) {
        cout << "Cislo " << x << " je na pozici " << b+1 << "." << endl;
    } else {
        cout << "Cislo " << x << " se v poli nenachazi." << endl;
    }
    

    return 0;
}
