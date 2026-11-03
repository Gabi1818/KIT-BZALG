#include <iostream>

using namespace std;

int main()
{
    int arr [] = {3,26,8,9,1,3,14,19,9};
    int max = arr [0];
    
    for (int i = 1; i < 9; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    
    cout << max << endl;
    return 0;
}
