// fichero 22357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22357;

Registro22357 crear_registro22357(int id) {
    Registro22357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22357(Registro22357 r) {
    return r.valor + r.id;
}
