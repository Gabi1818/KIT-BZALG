#include <iostream>
using namespace std;

int main()
{
    int cislo;
    cin >> cislo; //cislo ke kteremu se snazim priblizit
    int m, n; //m - nejblizsi mozne cislo, n - mocnina
    m = 1;
    n = 0;
    
    while (m <= cislo){
        m = m * 2;
        n++;
    }
    
    int vysledek1;
    int vysledek2;
    
    vysledek1 = m - cislo;
    vysledek2 = cislo - m /2;
    
    if (vysledek2 > vysledek1){
        //cout << m << " " << n;
        cout << "2^" << n << " = " << m;
    }
    else{
        //cout << m/2 << " " << n-1;
        cout << "2^" << n-1 << " = " << m/2;
    }
    

    return 0;
}
