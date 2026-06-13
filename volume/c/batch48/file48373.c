// fichero 48373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48373;

Registro48373 crear_registro48373(int id) {
    Registro48373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48373(Registro48373 r) {
    return r.valor + r.id;
}
