// fichero 37805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37805;

Registro37805 crear_registro37805(int id) {
    Registro37805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37805(Registro37805 r) {
    return r.valor + r.id;
}
