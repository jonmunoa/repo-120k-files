// fichero 22625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22625;

Registro22625 crear_registro22625(int id) {
    Registro22625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22625(Registro22625 r) {
    return r.valor + r.id;
}
