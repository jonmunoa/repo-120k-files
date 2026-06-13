// fichero 46461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46461;

Registro46461 crear_registro46461(int id) {
    Registro46461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46461(Registro46461 r) {
    return r.valor + r.id;
}
