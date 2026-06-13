// fichero 16089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16089;

Registro16089 crear_registro16089(int id) {
    Registro16089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16089(Registro16089 r) {
    return r.valor + r.id;
}
