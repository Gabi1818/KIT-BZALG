#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    for(int i = 0; i < 6 ; i++){
        arr[i] = 3 * i;
    }
    
    for(int polozka : arr){
        cout << polozka << " ";
    }
    
    cout << endl;
    
    for(int i = 5; i >= 0 ; i--){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    
    //jen suda
    for(int i = 0; i < 6 ; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;
    
    //fibonacciho posloupnost
    int f[20];
    f[0] = 0;
    f[1] = 1;
    
    for (int i = 2; i < 20; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
    
    for(int i = 0; i < 20 ; i++){
        cout << f[i] << " ";
    }

    return 0;
}
