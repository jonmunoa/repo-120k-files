// fichero 39245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39245;

Registro39245 crear_registro39245(int id) {
    Registro39245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39245(Registro39245 r) {
    return r.valor + r.id;
}
