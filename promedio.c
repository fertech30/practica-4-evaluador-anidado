#include <stdio.h>
#include <stdlib.h>

int main(){
    int edad, cal;
    printf("Hola alumno hazme un paro \n");
     printf("porfa ponme tu calificacion general aqui: 0 a 100 \n" , cal);
     scanf ( "%d" ,&cal);

     if (cal < 0 || cal > 100) {
        printf("Error: Calificación inválida. No puede ser negativa ni mayor a 100.\n");
        return 1;  // Salir del programa con error
    }

     printf("ahora ponme tu edad aqui: 0 a 18 \n");
     scanf ("%d" , &edad);

     if (edad < 0 || edad > 20) {
        printf("Error: Edad inválida. No puede ser negativa ni mayor a 20.\n");
        return 1;  // Salir del programa con error
    }
      if (edad >= 18) {
        if (cal >= 60) {
            printf("APROBADO MAYOR DE EDAD\n");
        } else {
            printf("REPROBADO MAYOR DE EDAD\n");
        }
    } else {
        if (cal >= 60) {
            printf("APROBADO MENOR DE EDAD\n");
        } else {
            printf("REPROBADO MENOR DE EDAD\n");
        }
}
    return 0;
    }
// hacer comprobacion para que el alumno no tenga mas de 100 de calificacion y para que su edad no sea negativa

//subir esto a github
//entregables seran los 3 codigos y despues subir lo que imprime
