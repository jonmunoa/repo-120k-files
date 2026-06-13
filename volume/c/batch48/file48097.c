// fichero 48097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48097;

Registro48097 crear_registro48097(int id) {
    Registro48097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48097(Registro48097 r) {
    return r.valor + r.id;
}
