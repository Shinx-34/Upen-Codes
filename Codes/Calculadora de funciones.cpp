#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Se declaran las variables necesarias para cada funcion, en este caso unicamente el option
    int option;

    //Se muestra el menu de funciones para que el usuario pueda elegir cual funcion desea calcular
    cout<<"--------Calculadora de funciones---------\n"<<endl;
    cout<<"1.Funcion S\n";
    cout<<"2.Funcion Z\n";
    cout<<"3.Funcion N/pi\n";
    cout<<"4.Gamma\n";
    cout<<"5.Funcion L\n";
    cout<<"6.Triangular\n";
    cout<<"7.Trapezoidal\n";
    cin>>option;

    //Se abre el switch para cada funcion
    switch(option){
        //en cada caso se pide al usuario que ingrese el valor de x, a y c, dependiendo de la funcion se pide el valor de m o b.
        //a si no dejamos variables sin usar y el usuario va directo a la funcion que necesita.
        //muse siempre va a ser el resultado de cada funcion.

        case 1:{// Funcion S
        double x, a, c, muse;
        

        cout<<"Ingrese el valor de x: "; 
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de c: ";
        cin>>c;

            //Se evalua la funcion S
        if(x < a){
        muse = 0;
        }
        else if(x >= a && x <= (a+c)/2){
        muse = 2 * pow((x-a)/(c-a), 2);
        }

        else if(x > (a+c)/2 && x <= c){
        muse = 1 - 2 * pow((x-c)/(c-a), 2);
        }

        else{
        muse = 1;
        }

        //Se muestra el resultado de la funcion S
        cout<<"El valor de la funcion S es: "<<muse<<endl;
        }
    break;
       case 2:{ //Funcion Z
        double x, a, c, muse;

        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de c: ";
        cin>>c;

        //Se evalua la funcion Z
        if(x <= a){
        muse = 1;
        }

        else if(x <= (a+c)/2){
        muse = 1 - (2 * pow((x-a)/(c-a),2));
        }

        else if(x < c){
        muse = 2 * pow((x-c)/(c-a),2);
        }

        else{
        muse = 0;
        }

        //Se muestra el resultado de la funcion Z
        cout<<"El valor de la funcion Z es: "<<muse<<endl;
        }
        break;


        case 3:{//Funcion N/pi
         double x,a,c,muse,b;
        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de c: ";
        cin>>c;

        cout<<"Ingrese el valor de b: ";
        cin>>b;

        //hace una evaluacion para determinar si x es menor o igual a b o mayor a b, para asi evaluar la funcion N/pi dependiendo del valor de x
        if(x<=b){
            //Se evalua la funcion N/pi en base a x, a y c

             if(x < a){
        muse = 0;
        }

        else if(x >= a && x <= (a+c)/2){
        muse = 2 * pow((x-a)/(c-a), 2);
        }

        else if(x > (a+c)/2 && x <= c){
        muse = 1 - 2 * pow((x-c)/(c-a), 2);
        }

        else{
        muse = 1;
        }

        //Se muestra el resultado de la funcion N/pi
        cout<<"El valor de la funcion N/pi es: "<<muse<<endl;
        }
        //Si x es mayor a b, se evalua la funcion N/pi en base a x, a, c y b
        else if(x > b){

            //Se evalua la funcion N/pi en base a x, a y c
             if(x <= a){
            muse = 1;
        }

        else if(x <= (a+c)/2){
        muse = 1 - (2 * pow((x-a)/(c-a),2));
        }

        else if(x < c){
        muse = 2 * pow((x-c)/(c-a),2);
        }

        else{
        muse = 0;
        }
        //Se muestra el resultado de la funcion N/pi
        cout<<"El valor de la funcion N/pi es: "<<muse<<endl;
        }
        }
        break;  

        case 4:{//Funcion Gamma
        double x,a,m,muse;
        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de m: ";
        cin>>m;
            //Se evalua la funcion Gamma dependiendo del valor de x, a y m
        if(x <= a){
            muse = 0;
        }
        else if(a < x && x <= m){
            muse = (x-a)/(m-a);
        }
        else{
            muse = 1;
        }

            //Se muestra el resultado de la funcion Gamma
        cout<<"El valor de la funcion Gamma es: "<<muse<<endl;
        }
        break;

        case 5:{//Funcion L
        double x,a,m,muse;
        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de m: ";
        cin>>m;

            //Se evalua la funcion L dependiendo del valor de x, a y m
        if(x <=a){
            muse = 1;
        }
        else if( a < x && x <= m){
            muse = 1 - (x-a)/(m-a);
        }
        else{
            muse = 0;
        }

        //Se muestra el resultado de la funcion L
        cout<<"El valor de la funcion L es: "<<muse<<endl;
        }
        break;

        case 6:{//Funcion Triangular
        double x,a,m,b,muse;
        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de m: ";
        cin>>m;

        cout<<"Ingrese el valor de b: ";
        cin>>b;

        //Se evalua la funcion Triangular dependiendo del valor de x, a, m y b
        if(x <= a){
            muse = 0;
        }
        else if(a < x && x <= m){
            muse = (x-a)/(m-a);
        }
        else if(m < x && x <=b){
            muse = (b-x)/(b-m);
        }
        else{
            muse = 0;
        }

        //Se muestra el resultado de la funcion Triangular
        cout<<"El valor de la funcion Triangular es: "<<muse<<endl;
        }
        break;

        case 7:{//Funcion Trapezoidal
            double x,a,b,c,d,muse;
        cout<<"Ingrese el valor de x: ";
        cin>>x;

        cout<<"Ingrese el valor de a: ";
        cin>>a;

        cout<<"Ingrese el valor de b: ";
        cin>>b;

        cout<<"Ingrese el valor de c: ";
        cin>>c;

        cout<<"Ingrese el valor de d: ";
        cin>>d;

        //Se evalua la funcion Trapezoidal dependiendo del valor de x, a, b, c y d
        if(x <= a){
            muse = 0;
        }
        else if(a < x && x <= b){
            muse = (x-a)/(b-a);
        }
        else if(b < x && x <= c){
            muse = 1;
        }
        else if(c < x && x <= d){
            muse = (d-x)/(d-c);
        }
        else{
            muse = 0;
        }

        //Se muestra el resultado de la funcion Trapezoidal
        cout<<"El valor de la funcion Trapezoidal es: "<<muse<<endl;
        }
        break;

         default://Si el usuario ingresa una opcion que no esta en el menu, se muestra un mensaje de error
         cout<<"Opcion no valida"<<endl;
    }

}