// fichero 4405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4405;

Registro4405 crear_registro4405(int id) {
    Registro4405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4405(Registro4405 r) {
    return r.valor + r.id;
}
