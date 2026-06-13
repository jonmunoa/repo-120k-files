// fichero 34605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34605;

Registro34605 crear_registro34605(int id) {
    Registro34605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34605(Registro34605 r) {
    return r.valor + r.id;
}
