// fichero 33365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33365;

Registro33365 crear_registro33365(int id) {
    Registro33365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33365(Registro33365 r) {
    return r.valor + r.id;
}
