// fichero 39833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39833;

Registro39833 crear_registro39833(int id) {
    Registro39833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39833(Registro39833 r) {
    return r.valor + r.id;
}
