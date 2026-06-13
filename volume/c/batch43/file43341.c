// fichero 43341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43341;

Registro43341 crear_registro43341(int id) {
    Registro43341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43341(Registro43341 r) {
    return r.valor + r.id;
}
