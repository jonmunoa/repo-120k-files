// fichero 39473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39473;

Registro39473 crear_registro39473(int id) {
    Registro39473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39473(Registro39473 r) {
    return r.valor + r.id;
}
