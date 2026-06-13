// fichero 22585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22585;

Registro22585 crear_registro22585(int id) {
    Registro22585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22585(Registro22585 r) {
    return r.valor + r.id;
}
