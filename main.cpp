#include <iostream>

using namespace std;

int main()
{
    int numero, cont = 0, n, n2 = 0;
    cin >> n;
    while (cont < n){
        cin >> numero;
        if (numero > 1){
            n2 = n2 + 1;
        }
        cont ++;
    }
    cout << n2 <<endl;
    return 0;
}
