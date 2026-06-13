// fichero 46989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46989;

Registro46989 crear_registro46989(int id) {
    Registro46989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46989(Registro46989 r) {
    return r.valor + r.id;
}
