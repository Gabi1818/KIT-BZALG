#include <iostream>

using namespace std;

int main()
{
    long int A;
    cout << "zadej A pro faktorial n: ";
    cin >> A;
    
    for (unsigned long int i = A -1; i > 0; i--){
        A = A * i;
    }
    
    cout << A;
    return 0;
}
