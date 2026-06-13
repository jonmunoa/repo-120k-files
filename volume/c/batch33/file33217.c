// fichero 33217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33217;

Registro33217 crear_registro33217(int id) {
    Registro33217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33217(Registro33217 r) {
    return r.valor + r.id;
}
