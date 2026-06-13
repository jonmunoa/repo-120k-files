// fichero 2453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2453;

Registro2453 crear_registro2453(int id) {
    Registro2453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2453(Registro2453 r) {
    return r.valor + r.id;
}
