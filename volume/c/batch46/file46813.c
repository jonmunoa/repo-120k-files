// fichero 46813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46813;

Registro46813 crear_registro46813(int id) {
    Registro46813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46813(Registro46813 r) {
    return r.valor + r.id;
}
