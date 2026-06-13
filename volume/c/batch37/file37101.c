// fichero 37101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37101;

Registro37101 crear_registro37101(int id) {
    Registro37101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37101(Registro37101 r) {
    return r.valor + r.id;
}
