#include <stdio.h>
#include "mensajeUDP.h"
#include "mensajeUDP.c"

int main (void){

    mensajeUDP mensaje;

    pideMensajeUDP(&mensaje);
    muestraUDP(mensaje);

    printf("El mensaje proveniente de la IP %s tiene un total de %.3f kb.", mensaje.ipOrigen , longitudMensajePlano(mensaje));
}