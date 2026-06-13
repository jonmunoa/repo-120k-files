// fichero 48973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48973;

Registro48973 crear_registro48973(int id) {
    Registro48973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48973(Registro48973 r) {
    return r.valor + r.id;
}
