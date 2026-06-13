// fichero 7473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7473;

Registro7473 crear_registro7473(int id) {
    Registro7473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7473(Registro7473 r) {
    return r.valor + r.id;
}
