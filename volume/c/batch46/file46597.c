// fichero 46597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46597;

Registro46597 crear_registro46597(int id) {
    Registro46597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46597(Registro46597 r) {
    return r.valor + r.id;
}
