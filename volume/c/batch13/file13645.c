// fichero 13645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13645;

Registro13645 crear_registro13645(int id) {
    Registro13645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13645(Registro13645 r) {
    return r.valor + r.id;
}
