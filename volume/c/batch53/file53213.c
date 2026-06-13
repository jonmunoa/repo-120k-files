// fichero 53213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53213;

Registro53213 crear_registro53213(int id) {
    Registro53213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53213(Registro53213 r) {
    return r.valor + r.id;
}
