// fichero 13813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13813;

Registro13813 crear_registro13813(int id) {
    Registro13813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13813(Registro13813 r) {
    return r.valor + r.id;
}
