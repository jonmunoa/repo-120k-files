// fichero 13601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13601;

Registro13601 crear_registro13601(int id) {
    Registro13601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13601(Registro13601 r) {
    return r.valor + r.id;
}
