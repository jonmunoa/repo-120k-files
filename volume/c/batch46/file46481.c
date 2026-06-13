// fichero 46481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46481;

Registro46481 crear_registro46481(int id) {
    Registro46481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46481(Registro46481 r) {
    return r.valor + r.id;
}
