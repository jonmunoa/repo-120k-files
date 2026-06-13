// fichero 22933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22933;

Registro22933 crear_registro22933(int id) {
    Registro22933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22933(Registro22933 r) {
    return r.valor + r.id;
}
