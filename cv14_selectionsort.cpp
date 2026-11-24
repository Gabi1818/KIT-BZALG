#include <iostream>
using namespace std;

int main()
{
    int tmp, min;
    int pole [] = { 2, 8, 10, 2, 14, 2, 15, 8 };
    
    for (int i = 0; i < 8-1; i++){
        min = i;
        
        for (int j = i+1; j < 8; j++){
            if (pole[j] < pole[min]){
                min = j;
            }
        }
    
        tmp = pole[min];
        pole[min] = pole[i];
        pole[i] = tmp;
    }
    
    for (int i = 0; i < 8; i++) {
        cout << pole[i] << " ";
    }

    return 0;
}
