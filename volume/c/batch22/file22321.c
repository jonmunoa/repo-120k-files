// fichero 22321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22321;

Registro22321 crear_registro22321(int id) {
    Registro22321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22321(Registro22321 r) {
    return r.valor + r.id;
}
