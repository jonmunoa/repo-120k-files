// fichero 33317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33317;

Registro33317 crear_registro33317(int id) {
    Registro33317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33317(Registro33317 r) {
    return r.valor + r.id;
}
