#include <iostream>

using namespace std;

int main()
{
    cout << "zadej vyraz, napr 2 + 2: ";
    float a, b, x;
    char op;
    bool povedloSe = true;
    cin >> a >> op >> b;
    
    
    switch (op) {
        case '+':
            x = a + b;
            break;
        case '-':
           x = a - b;
            break;
        case '*':
            x = a * b;
            break;
        case '/':
            x = a / b;
            break;
        default:
            cout << "spatny vstup";
            povedloSe = false;
            
    }
    
    if (povedloSe){
        cout << "x = ";
        cout << x;
    }
    

}
