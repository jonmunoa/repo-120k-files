// fichero 48409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48409;

Registro48409 crear_registro48409(int id) {
    Registro48409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48409(Registro48409 r) {
    return r.valor + r.id;
}
