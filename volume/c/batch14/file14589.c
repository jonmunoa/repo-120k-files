// fichero 14589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14589;

Registro14589 crear_registro14589(int id) {
    Registro14589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14589(Registro14589 r) {
    return r.valor + r.id;
}
