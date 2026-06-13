// fichero 13549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13549;

Registro13549 crear_registro13549(int id) {
    Registro13549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13549(Registro13549 r) {
    return r.valor + r.id;
}
