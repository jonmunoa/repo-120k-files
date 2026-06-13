// fichero 13521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13521;

Registro13521 crear_registro13521(int id) {
    Registro13521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13521(Registro13521 r) {
    return r.valor + r.id;
}
