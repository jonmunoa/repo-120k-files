// fichero 33429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33429;

Registro33429 crear_registro33429(int id) {
    Registro33429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33429(Registro33429 r) {
    return r.valor + r.id;
}
