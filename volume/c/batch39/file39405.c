// fichero 39405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39405;

Registro39405 crear_registro39405(int id) {
    Registro39405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39405(Registro39405 r) {
    return r.valor + r.id;
}
