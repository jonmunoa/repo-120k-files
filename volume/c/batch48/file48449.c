// fichero 48449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48449;

Registro48449 crear_registro48449(int id) {
    Registro48449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48449(Registro48449 r) {
    return r.valor + r.id;
}
