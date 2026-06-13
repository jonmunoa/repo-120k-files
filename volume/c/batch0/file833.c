// fichero 833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro833;

Registro833 crear_registro833(int id) {
    Registro833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro833(Registro833 r) {
    return r.valor + r.id;
}
