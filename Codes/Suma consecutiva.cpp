#include <stdio.h>//permite el uso de Printf y Scanf


int main(){
    int numero1;
    int numero2;
    int i;
    int suma = 0;//guarda el resultado de las sumas
    float promedio = 0;//se encarga de dividir el total de sumas 
    int contador = 0;//colabora con promedio siendo encargado de contar las veces que se suma.
    
    // Solicitar al usuario que ingrese el número inicial y final
    printf("Ingrese el numero inicial: ");
    scanf("%d", &numero1);

    printf("Ingrese el numero final: ");
    scanf("%d", &numero2);
    // Valida que el número inicial no sea mayor que el número final
    while(numero1 > numero2){
        printf("ERROR: El numero inicial no puede ser mayor que el final.\n");
    //Le pide al usuario que ingrese nuevamente el número inicial y final para que haya un rango valido
    printf("Ingrese el numero inicial: ");
    scanf("%d", &numero1);

    printf("Ingrese el numero final: ");
    scanf("%d", &numero2);
    }
    // Calcular la suma y el promedio de los números entre el número inicial y final
  for (i = numero1; i <= numero2; i++) {
            suma += i;
            contador++;
        } //evita division entre cero en caso de que no sume nada
        if (contador > 0) {
         promedio = (float)suma / contador;
            // Mostrar el resultado de la suma y el promedio
         printf("La suma de los numeros es: %d\n", suma);
         printf("El promedio de la suma es:%.2f\n", promedio); //el formato %.2f se utiliza para mostrar el promedio con dos decimales y %.d es para mostrar Int no float
        }
        else{   // Si no se ingresaron números válidos, mostrar un mensaje de error
            printf("No se ingresaron numeros validos.\n");

        }
    return 0;
}
