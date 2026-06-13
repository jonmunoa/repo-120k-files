// fichero 32725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32725;

Registro32725 crear_registro32725(int id) {
    Registro32725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32725(Registro32725 r) {
    return r.valor + r.id;
}
