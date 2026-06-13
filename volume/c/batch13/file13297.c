// fichero 13297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13297;

Registro13297 crear_registro13297(int id) {
    Registro13297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13297(Registro13297 r) {
    return r.valor + r.id;
}
