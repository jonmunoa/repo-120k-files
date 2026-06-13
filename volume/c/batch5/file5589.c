// fichero 5589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5589;

Registro5589 crear_registro5589(int id) {
    Registro5589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5589(Registro5589 r) {
    return r.valor + r.id;
}
