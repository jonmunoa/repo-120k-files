// fichero 20349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20349;

Registro20349 crear_registro20349(int id) {
    Registro20349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20349(Registro20349 r) {
    return r.valor + r.id;
}
