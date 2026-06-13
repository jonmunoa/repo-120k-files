// fichero 53589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53589;

Registro53589 crear_registro53589(int id) {
    Registro53589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53589(Registro53589 r) {
    return r.valor + r.id;
}
