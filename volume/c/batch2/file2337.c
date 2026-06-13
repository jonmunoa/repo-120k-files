// fichero 2337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2337;

Registro2337 crear_registro2337(int id) {
    Registro2337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2337(Registro2337 r) {
    return r.valor + r.id;
}
