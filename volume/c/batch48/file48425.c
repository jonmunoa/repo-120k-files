// fichero 48425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48425;

Registro48425 crear_registro48425(int id) {
    Registro48425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48425(Registro48425 r) {
    return r.valor + r.id;
}
