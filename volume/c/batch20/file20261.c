// fichero 20261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20261;

Registro20261 crear_registro20261(int id) {
    Registro20261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20261(Registro20261 r) {
    return r.valor + r.id;
}
