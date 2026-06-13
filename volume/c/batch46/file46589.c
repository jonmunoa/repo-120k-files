// fichero 46589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46589;

Registro46589 crear_registro46589(int id) {
    Registro46589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46589(Registro46589 r) {
    return r.valor + r.id;
}
