// fichero 337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro337;

Registro337 crear_registro337(int id) {
    Registro337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro337(Registro337 r) {
    return r.valor + r.id;
}
