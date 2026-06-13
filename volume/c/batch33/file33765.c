// fichero 33765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33765;

Registro33765 crear_registro33765(int id) {
    Registro33765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33765(Registro33765 r) {
    return r.valor + r.id;
}
