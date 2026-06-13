// fichero 16045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16045;

Registro16045 crear_registro16045(int id) {
    Registro16045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16045(Registro16045 r) {
    return r.valor + r.id;
}
