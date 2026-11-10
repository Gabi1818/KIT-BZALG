#include <iostream>

using namespace std;

int main()
{
    int tmp;
    //int arr[] = {3,2,5,1,2,9,5,7};
    int arr[] = {3,2,2,1,2,9,5,7};
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

    /*
    //reverse pole
    int posledniIndex = 7;
    for(int i = 0; i < 4; i++){
        tmp = arr[i];
        arr[i] = arr[posledniIndex];
        arr[posledniIndex] = tmp;
        posledniIndex--;
    }
    */

    /*
    //odstraneni 2 duplicit
    for (int i = 1; i < 8; i++){
        if (arr[i] == arr[i-1]) //posun
        {
            for(int j = i; j < 8; j++){
                arr[j-1] = arr[j];
            }
        }
    }
    */

    //odstraneni vsech duplicit
    int velikost = 8;
    
    for (int i = 1; i < velikost; i++) {
        if (arr[i] == arr[i-1]) {
            for (int j = i; j < velikost - 1; j++) {
                arr[j] = arr[j+1];
            }
    
            velikost--;
            i--;
        }
    }


    
    for(int p : arr){
        cout << p << " ";
    }

    return 0;
}
