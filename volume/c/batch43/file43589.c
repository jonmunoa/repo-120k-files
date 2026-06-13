// fichero 43589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43589;

Registro43589 crear_registro43589(int id) {
    Registro43589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43589(Registro43589 r) {
    return r.valor + r.id;
}
