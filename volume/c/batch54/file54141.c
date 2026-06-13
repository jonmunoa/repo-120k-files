// fichero 54141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54141;

Registro54141 crear_registro54141(int id) {
    Registro54141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54141(Registro54141 r) {
    return r.valor + r.id;
}
