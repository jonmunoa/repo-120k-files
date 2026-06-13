// fichero 2473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2473;

Registro2473 crear_registro2473(int id) {
    Registro2473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2473(Registro2473 r) {
    return r.valor + r.id;
}
