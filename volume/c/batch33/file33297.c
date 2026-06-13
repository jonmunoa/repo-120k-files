// fichero 33297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33297;

Registro33297 crear_registro33297(int id) {
    Registro33297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33297(Registro33297 r) {
    return r.valor + r.id;
}
