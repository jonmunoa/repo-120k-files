// fichero 22421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22421;

Registro22421 crear_registro22421(int id) {
    Registro22421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22421(Registro22421 r) {
    return r.valor + r.id;
}
