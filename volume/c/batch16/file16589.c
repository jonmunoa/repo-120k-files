// fichero 16589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16589;

Registro16589 crear_registro16589(int id) {
    Registro16589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16589(Registro16589 r) {
    return r.valor + r.id;
}
