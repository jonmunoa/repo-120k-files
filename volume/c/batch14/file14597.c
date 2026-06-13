// fichero 14597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14597;

Registro14597 crear_registro14597(int id) {
    Registro14597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14597(Registro14597 r) {
    return r.valor + r.id;
}
