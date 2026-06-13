// fichero 22473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22473;

Registro22473 crear_registro22473(int id) {
    Registro22473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22473(Registro22473 r) {
    return r.valor + r.id;
}
