// fichero 33089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33089;

Registro33089 crear_registro33089(int id) {
    Registro33089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33089(Registro33089 r) {
    return r.valor + r.id;
}
