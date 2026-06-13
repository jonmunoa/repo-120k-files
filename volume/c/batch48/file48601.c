// fichero 48601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48601;

Registro48601 crear_registro48601(int id) {
    Registro48601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48601(Registro48601 r) {
    return r.valor + r.id;
}
