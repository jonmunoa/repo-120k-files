// fichero 33113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33113;

Registro33113 crear_registro33113(int id) {
    Registro33113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33113(Registro33113 r) {
    return r.valor + r.id;
}
