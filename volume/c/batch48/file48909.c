// fichero 48909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48909;

Registro48909 crear_registro48909(int id) {
    Registro48909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48909(Registro48909 r) {
    return r.valor + r.id;
}
