#ifndef __mensajeUDP_h_
#define __mensajeUDP_h_

typedef struct 
{
    char ipOrigen[50];
    int longitud;
    int numDatagramas;
    float porcenRedundancia;

}mensajeUDP;

void pideMensajeUDP (mensajeUDP *mensaje);
void muestraUDP (mensajeUDP mensaje);
float longitudMensajePlano (mensajeUDP mensaje);




#endif /*__mensajeUDP_h_*/ 