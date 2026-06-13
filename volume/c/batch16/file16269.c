// fichero 16269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16269;

Registro16269 crear_registro16269(int id) {
    Registro16269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16269(Registro16269 r) {
    return r.valor + r.id;
}
