#include <iostream>//Para utilizar Cout y Cin
using namespace std;//Evita usar std:: en cada uso del Cout y Cin

int main(){
    int opcion;
    float valor1,valor2,resultado;
    cout<<"----------Calculadorita----------"<<endl;
    
    //Menu de opciones disponibles
    cout<<"Ingrese la operacion a realizar: "<<endl;
    cout<<"1. Suma"<<endl; 
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    cin>>opcion;

    //Termina el programa en caso de que la opcion ingresada no sea valida y evita preguntar al usuario los numeros y que queden sin utlizar.
    if (opcion<1 || opcion>4){ 
        cout<<"Opcion no valida"<<endl;
        return 0;
    }
    //ingresa el valor 1 
    cout<<"Ingrese el primer numero: ";
    cin>>valor1;

    //ingresa el valor 2
    cout<<"Ingrese el segundo numero: ";
    cin>>valor2;
    
    
    //se abre switch    
    switch (opcion) {
        case 1: //suma
        resultado=valor1+valor2;
        cout<<"El resultado de la suma es: "<<resultado<<endl;
        break;
        
        case 2: //resta
        resultado=valor1-valor2;
        cout<<"El resultado de la resta es: "<<resultado<<endl;
        break;
        
        case 3://mutli
        resultado=valor1*valor2;
        cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
        break;

        case 4://divi
        if (valor2==0){//recodemos que no se puede dividir entre 0, asi que hacemos una condicion para evitar ese error
            cout<<"Error: No se puede dividir entre cero"<<endl;
        }else{
            resultado=valor1/valor2;
            cout<<"El resultado de la division es: "<<resultado<<endl;
        }
        break;

        default://Una opcion en caso de que el usuario ingrese un numero que no este en el menu, se le indicara que la opcion no es valida
        cout<<"Opcion no valida"<<endl;
        break;
    }
    return 0;
}
