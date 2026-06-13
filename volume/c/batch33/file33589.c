// fichero 33589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33589;

Registro33589 crear_registro33589(int id) {
    Registro33589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33589(Registro33589 r) {
    return r.valor + r.id;
}
