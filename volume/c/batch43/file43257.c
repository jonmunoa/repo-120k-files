// fichero 43257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43257;

Registro43257 crear_registro43257(int id) {
    Registro43257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43257(Registro43257 r) {
    return r.valor + r.id;
}
