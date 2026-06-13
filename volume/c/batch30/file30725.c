// fichero 30725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30725;

Registro30725 crear_registro30725(int id) {
    Registro30725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30725(Registro30725 r) {
    return r.valor + r.id;
}
