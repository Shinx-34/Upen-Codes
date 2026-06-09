#include <iostream> //libreria para usar cin y cout
using namespace std; //necesario para no poner std:: antes de cada cin y cout

int main(){
    int num;
    unsigned long long factorial = 1;//para guardar numeros muy grandes que el int no puede almacenar. 
    int i = 1; //previene en caso de que el usuario ingrese 0, ya que el factorial de 0 es 1.

    //se pregunta al usuario por el numero a factorializar
    cout << "Introduce tu numero para sacar el factorial" << endl;
    cin >> num;

    if(num == 0) //en caso de que el usuario asigne el numero como 0, el factorial de 0 es 1.
    {
        factorial = 1;
    }
    //se valida que el numero no sea negativo.  
    if (num < 0)
    {
        //muestra el mensaje de error en caso de que el numero sea negativo.
        cout << "¡ERROR! No se puede sacar el factorial de un numero negativo" << endl;
    }
    else{
        //se ejecuta el ciclo para sacar el factorial del numero ingresado por el usuario.
        while (i <= num)
        {
            factorial = factorial * i;
            i++;
        }
        //muestra el resultado 
        cout << "El factorial del numero "<< num << " es: " << factorial;
    }
    return 0;
}
