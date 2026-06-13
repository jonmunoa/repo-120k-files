// fichero 22589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22589;

Registro22589 crear_registro22589(int id) {
    Registro22589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22589(Registro22589 r) {
    return r.valor + r.id;
}
