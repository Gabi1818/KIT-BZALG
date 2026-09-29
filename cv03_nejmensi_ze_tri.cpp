#include <iostream>

using namespace std;

int main()
{
    float A;
    float B;
    float C;
    float max;
    
    cin >> A;
    cin >> B;
    cin >> C;
    
    max = A;
    
    if (B > max){
        max = B;
    }
    
        
    if (C > max){
        max = C;
    }
    
    cout << "nejvyssi cislo: ";
    cout << max;
    

}
