// fichero 15341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15341;

Registro15341 crear_registro15341(int id) {
    Registro15341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15341(Registro15341 r) {
    return r.valor + r.id;
}
