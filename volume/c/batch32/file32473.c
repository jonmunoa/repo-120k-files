// fichero 32473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32473;

Registro32473 crear_registro32473(int id) {
    Registro32473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32473(Registro32473 r) {
    return r.valor + r.id;
}
