// fichero 37589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37589;

Registro37589 crear_registro37589(int id) {
    Registro37589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37589(Registro37589 r) {
    return r.valor + r.id;
}
