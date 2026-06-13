// fichero 33625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33625;

Registro33625 crear_registro33625(int id) {
    Registro33625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33625(Registro33625 r) {
    return r.valor + r.id;
}
