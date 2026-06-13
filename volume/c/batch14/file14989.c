// fichero 14989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14989;

Registro14989 crear_registro14989(int id) {
    Registro14989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14989(Registro14989 r) {
    return r.valor + r.id;
}
