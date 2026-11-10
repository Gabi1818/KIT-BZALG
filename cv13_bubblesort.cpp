#include <iostream>

using namespace std;

int main()
{
    int tmp;
    int arr[] = {3,2,5,1,2,9,5,7};
    bool jeSerazeno = false;
    
    for(int p : arr){
        cout << p << " ";
    }
    
    cout << endl;
    
    for(int j = 0; j < 7; j++){
        jeSerazeno = true;
        for (int i = 0; i < 8 - j; i++){
            if (arr[i] > arr[i+1]) //prohod
            {
                tmp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = tmp;
                jeSerazeno = false;
            }
        }
        
        if (jeSerazeno){
            break;
        }
    }

    //reverse pole
    int posledniIndex = 7;
    for(int i = 0; i < 4; i++){
        tmp = arr[i];
        arr[i] = arr[posledniIndex];
        arr[posledniIndex] = tmp;
        posledniIndex--;
    }

    
    for(int p : arr){
        cout << p << " ";
    }

    return 0;
}
