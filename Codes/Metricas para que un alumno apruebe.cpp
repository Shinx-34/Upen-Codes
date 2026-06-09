#include <iostream>
using namespace std; //Iostream y este elemento son necesarios para que cin y cout sean funcionales 

int main(){
    float trabajo, portafolio, examen, asistencia, preex, final; //variables para cada cosa, preex es para calcular si hay permiso para el examen.

    cout << "Inserta tu calificacion de trabajo:"; //Cout muestra la informacion como lo haria un PrintF
    cin >> trabajo; //cin se la otorga a la variable

    cout << "inserta tu calificacion del portafolio:";
    cin >> portafolio;

    cout << "Ingresa la calificacion de tu examen:";
    cin >> examen;

    cout << "Inserta tu porcentaje de asistencia:";
    cin >> asistencia;

    preex =  (trabajo * 0.30) + (portafolio * 0.30) + (examen * 0.40);

    if (trabajo >= 50 && portafolio >= 50 && examen >= 50 && asistencia >= 80){ //calculo para ambos requisitos 
    cout << "Apto para evaluacion ordinaria";
    
    final =  preex; //calculo final para ir o no remedial

        //calculo para aprobar o no el curso, si es mayor o igual a 70 se aprueba, si no se va a remedial
    if (final >= 70){
        cout << "\nAlumno Aprobado! calificacion final:\n";
        cout << final;
    }
    else{
        cout << "\nAlumno desafortunadamente no aprobado, nos vemos en Remedial\n"; 
        cout << final;
    }
    }
    else{//el que pasa si no se cumplen las condiciones
        cout<<"Alumno a remedial debido que una de las condiciones no se cumplio\n"; 
        cout << preex;
    }



return 0;
}
