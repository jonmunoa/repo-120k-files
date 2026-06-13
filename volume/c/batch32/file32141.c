// fichero 32141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32141;

Registro32141 crear_registro32141(int id) {
    Registro32141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32141(Registro32141 r) {
    return r.valor + r.id;
}
