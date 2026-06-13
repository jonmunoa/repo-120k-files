// fichero 13249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13249;

Registro13249 crear_registro13249(int id) {
    Registro13249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13249(Registro13249 r) {
    return r.valor + r.id;
}
