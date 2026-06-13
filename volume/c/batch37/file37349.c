// fichero 37349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37349;

Registro37349 crear_registro37349(int id) {
    Registro37349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37349(Registro37349 r) {
    return r.valor + r.id;
}
