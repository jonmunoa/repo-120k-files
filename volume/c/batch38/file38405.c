// fichero 38405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38405;

Registro38405 crear_registro38405(int id) {
    Registro38405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38405(Registro38405 r) {
    return r.valor + r.id;
}
