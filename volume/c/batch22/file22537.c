// fichero 22537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22537;

Registro22537 crear_registro22537(int id) {
    Registro22537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22537(Registro22537 r) {
    return r.valor + r.id;
}
