// fichero 38833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38833;

Registro38833 crear_registro38833(int id) {
    Registro38833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38833(Registro38833 r) {
    return r.valor + r.id;
}
