// fichero 32973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32973;

Registro32973 crear_registro32973(int id) {
    Registro32973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32973(Registro32973 r) {
    return r.valor + r.id;
}
