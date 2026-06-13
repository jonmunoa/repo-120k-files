// fichero 13473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13473;

Registro13473 crear_registro13473(int id) {
    Registro13473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13473(Registro13473 r) {
    return r.valor + r.id;
}
