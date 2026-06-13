// fichero 1589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1589;

Registro1589 crear_registro1589(int id) {
    Registro1589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1589(Registro1589 r) {
    return r.valor + r.id;
}
