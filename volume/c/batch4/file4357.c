// fichero 4357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4357;

Registro4357 crear_registro4357(int id) {
    Registro4357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4357(Registro4357 r) {
    return r.valor + r.id;
}
