#include <iostream>
using namespace std; //Iostream y este elemento son necesarios para que cin y cout sean funcionales 

int main(){
    float trabajo, portafolio, examen, asistencia, preex, final; //variables para cada cosa, pre-ex es para calcular si hay permiso para el examen.

    cout << "Inserta tu calificacion de trabajo:"; //Cout obtiene la informacion
    cin >> trabajo; //cin se la otorga a la variable

    cout << "inserta tu calificacion del portafolio:";
    cin >> portafolio;

    cout << "Ingresa la calificacion de tu examen:";
    cin >> examen;

    cout << "Inserta tu porcentaje de asistencia:";
    cin >> asistencia;

    preex =  (trabajo * 0.30) + (portafolio * 0.30) + (examen * 0.40);

    if (trabajo >= 50 && portafolio >= 50 && examen >= 50 && asistencia >= 80){ //calculo para ambos requisitos 
    cout << "Apto para evaluacion ordinaria";//cout pose una 2nda funcion que le permite desplegar mensajes se puede usar como variante del Printf
    
    final =  preex; //calculo final para ir o no remedial

        //calculo para aprobar o no el curso, si es mayor o igual a 60 se aprueba, si no se va a remedial
    if (final >= 60){
        cout << "\nAlumno Aprobado! calificacion final:\n";
        cout << final;
    }
    else{
        cout << "\nAlumno desafortunadamente no aprobado, nos vemos en Remedial\n"; 
        cout << final;
    }
    }
    else{//el que pasa si no se cumplen las condiciones
        cout<<"Alumno a remedial\n"; 
        cout << preex;
    }



return 0;
}