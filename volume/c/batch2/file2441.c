// fichero 2441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2441;

Registro2441 crear_registro2441(int id) {
    Registro2441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2441(Registro2441 r) {
    return r.valor + r.id;
}
