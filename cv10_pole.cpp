#include <iostream>

using namespace std;

int main()
{
    int arr[3] = {42, 32, 22};
    for(int polozka : arr){
        cout << polozka << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i < 3 ; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
