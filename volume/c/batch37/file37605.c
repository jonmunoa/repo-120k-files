// fichero 37605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37605;

Registro37605 crear_registro37605(int id) {
    Registro37605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37605(Registro37605 r) {
    return r.valor + r.id;
}
