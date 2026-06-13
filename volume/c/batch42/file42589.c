// fichero 42589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42589;

Registro42589 crear_registro42589(int id) {
    Registro42589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42589(Registro42589 r) {
    return r.valor + r.id;
}
