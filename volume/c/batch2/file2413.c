// fichero 2413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2413;

Registro2413 crear_registro2413(int id) {
    Registro2413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2413(Registro2413 r) {
    return r.valor + r.id;
}
