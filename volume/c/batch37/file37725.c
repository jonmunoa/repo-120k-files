// fichero 37725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37725;

Registro37725 crear_registro37725(int id) {
    Registro37725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37725(Registro37725 r) {
    return r.valor + r.id;
}
