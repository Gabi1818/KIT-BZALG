#include <iostream>

using namespace std;

int main()
{
    float A;
    cin >> A;
    
    if (A == 0){
        cout << "je nula";
    }
    else if (A > 0){
        cout << "je kladne";
    }
    else{
        cout << "je zaporne";
    }

}
