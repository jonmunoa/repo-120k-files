// fichero 43349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43349;

Registro43349 crear_registro43349(int id) {
    Registro43349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43349(Registro43349 r) {
    return r.valor + r.id;
}
