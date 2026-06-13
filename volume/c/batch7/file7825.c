// fichero 7825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7825;

Registro7825 crear_registro7825(int id) {
    Registro7825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7825(Registro7825 r) {
    return r.valor + r.id;
}
