// fichero 16725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16725;

Registro16725 crear_registro16725(int id) {
    Registro16725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16725(Registro16725 r) {
    return r.valor + r.id;
}
