#include <iostream>

using namespace std;

int main()
{
    int i;
    int N;
    int sum;
    i = 1;
    sum = 0;
    N = 1;
    
    cout << "zadej posledni prvek aritmeticke posloupnosti N: ";
    cin >> N;
    
    while(i<=N){
        sum = sum + 1;
        i = i + 1;
    }
    cout << sum;
    cout << N * (N+1) / 2;
    
    return 0;
}
