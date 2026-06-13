// fichero 54329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54329;

Registro54329 crear_registro54329(int id) {
    Registro54329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54329(Registro54329 r) {
    return r.valor + r.id;
}
