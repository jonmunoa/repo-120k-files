// fichero 16597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16597;

Registro16597 crear_registro16597(int id) {
    Registro16597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16597(Registro16597 r) {
    return r.valor + r.id;
}
