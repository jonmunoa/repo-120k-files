// fichero 20589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20589;

Registro20589 crear_registro20589(int id) {
    Registro20589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20589(Registro20589 r) {
    return r.valor + r.id;
}
