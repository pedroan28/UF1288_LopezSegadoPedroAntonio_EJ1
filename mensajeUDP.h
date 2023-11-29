#ifndef __mensajeUDP_h_
#define __mensajeUDP_h_
#define MAX 50
typedef struct 
{
    char ipOrigen[MAX];
    int longitud;
    int numDatagramas;
    float porcenRedundancia;

}mensajeUDP;

void pideMensajeUDP (mensajeUDP *mensaje);
void muestraUDP (mensajeUDP mensaje);
float longitudMensajePlano (mensajeUDP mensaje);




#endif /*__mensajeUDP_h_*/ 