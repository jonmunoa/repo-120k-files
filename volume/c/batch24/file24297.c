// fichero 24297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24297;

Registro24297 crear_registro24297(int id) {
    Registro24297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24297(Registro24297 r) {
    return r.valor + r.id;
}
