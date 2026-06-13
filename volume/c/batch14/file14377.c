// fichero 14377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14377;

Registro14377 crear_registro14377(int id) {
    Registro14377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14377(Registro14377 r) {
    return r.valor + r.id;
}
