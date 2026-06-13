// fichero 48605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48605;

Registro48605 crear_registro48605(int id) {
    Registro48605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48605(Registro48605 r) {
    return r.valor + r.id;
}
