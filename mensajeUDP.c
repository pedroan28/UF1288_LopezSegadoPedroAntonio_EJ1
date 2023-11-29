#include <stdio.h>
#include "mensajeUDP.h"
#include <string.h>


void pideMensajeUDP (mensajeUDP *mensaje){

    int flag = 0;

    printf("Dime la direccion IP: \n");
    scanf("%s", mensaje->ipOrigen);
 
    
    printf("Dime la longitud: \n");
    scanf("%d", &mensaje->longitud);
    
    printf("Dime el numero de datogramas: \n");
    scanf("%d", &mensaje->numDatagramas);

    do {
        printf("Dime el porcentaje de redundancia (0-1):\n");
        scanf("%f", &mensaje->porcenRedundancia);

        if (mensaje->porcenRedundancia >= 0 && mensaje->porcenRedundancia <= 1) {
            flag = 1;
        } else {
            printf("Porcentaje no valido. Debe estar entre 0 y 1.\n");
        }

    } while (flag == 0); 

    getchar();
}


void muestraUDP (mensajeUDP mensaje){

    
    printf("Direccion IP: %s\n", mensaje.ipOrigen);
    printf("Longitud/datagrama: %d Kb\n", mensaje.longitud);
    printf("Num. Datagramas: %d\n", mensaje.numDatagramas);
    printf("Porcentaje redundancia: %.2f%%\n", mensaje.porcenRedundancia);

}

float longitudMensajePlano (mensajeUDP mensaje){

    float resul;

    resul = mensaje.longitud * mensaje.numDatagramas;

    resul = resul - (resul* mensaje.porcenRedundancia);

    return resul;
}
