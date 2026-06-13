// fichero 33989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33989;

Registro33989 crear_registro33989(int id) {
    Registro33989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33989(Registro33989 r) {
    return r.valor + r.id;
}
