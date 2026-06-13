// fichero 33341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33341;

Registro33341 crear_registro33341(int id) {
    Registro33341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33341(Registro33341 r) {
    return r.valor + r.id;
}
