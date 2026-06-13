// fichero 37597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37597;

Registro37597 crear_registro37597(int id) {
    Registro37597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37597(Registro37597 r) {
    return r.valor + r.id;
}
