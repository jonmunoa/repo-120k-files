// fichero 22549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22549;

Registro22549 crear_registro22549(int id) {
    Registro22549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22549(Registro22549 r) {
    return r.valor + r.id;
}
