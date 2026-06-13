// fichero 16625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16625;

Registro16625 crear_registro16625(int id) {
    Registro16625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16625(Registro16625 r) {
    return r.valor + r.id;
}
