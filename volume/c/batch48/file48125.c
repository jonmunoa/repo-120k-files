// fichero 48125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48125;

Registro48125 crear_registro48125(int id) {
    Registro48125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48125(Registro48125 r) {
    return r.valor + r.id;
}
