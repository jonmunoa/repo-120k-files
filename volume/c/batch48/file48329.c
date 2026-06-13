// fichero 48329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48329;

Registro48329 crear_registro48329(int id) {
    Registro48329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48329(Registro48329 r) {
    return r.valor + r.id;
}
