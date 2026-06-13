// fichero 33257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33257;

Registro33257 crear_registro33257(int id) {
    Registro33257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33257(Registro33257 r) {
    return r.valor + r.id;
}
