// fichero 33381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33381;

Registro33381 crear_registro33381(int id) {
    Registro33381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33381(Registro33381 r) {
    return r.valor + r.id;
}
