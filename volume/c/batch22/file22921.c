// fichero 22921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22921;

Registro22921 crear_registro22921(int id) {
    Registro22921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22921(Registro22921 r) {
    return r.valor + r.id;
}
