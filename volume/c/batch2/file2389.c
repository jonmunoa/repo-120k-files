// fichero 2389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2389;

Registro2389 crear_registro2389(int id) {
    Registro2389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2389(Registro2389 r) {
    return r.valor + r.id;
}
