// fichero 14269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14269;

Registro14269 crear_registro14269(int id) {
    Registro14269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14269(Registro14269 r) {
    return r.valor + r.id;
}
