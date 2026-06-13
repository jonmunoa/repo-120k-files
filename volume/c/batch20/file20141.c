// fichero 20141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20141;

Registro20141 crear_registro20141(int id) {
    Registro20141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20141(Registro20141 r) {
    return r.valor + r.id;
}
