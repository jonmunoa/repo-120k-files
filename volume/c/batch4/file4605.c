// fichero 4605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4605;

Registro4605 crear_registro4605(int id) {
    Registro4605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4605(Registro4605 r) {
    return r.valor + r.id;
}
