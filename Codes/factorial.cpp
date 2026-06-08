#include <iostream>
using namespace std;

int main(){
    int num;
    unsigned long long factorial = 1;
    int i = 1;

    cout << "Introduce tu numero para sacar el factorial" << endl;
    cin >> num;

    if (num < 0)
    {
        cout << "¡ERROR! No se puede sacar el factorial de un numero negativo" << endl;
    }
    else{
        while (i <= num)
        {
            factorial = factorial * i;
            i++;
        }
        cout << "El factorial del numero "<< num << " es: " << factorial;
    }
    return 0;
}