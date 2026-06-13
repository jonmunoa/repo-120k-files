// fichero 15581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15581;

Registro15581 crear_registro15581(int id) {
    Registro15581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15581(Registro15581 r) {
    return r.valor + r.id;
}
