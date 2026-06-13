// fichero 13833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13833;

Registro13833 crear_registro13833(int id) {
    Registro13833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13833(Registro13833 r) {
    return r.valor + r.id;
}
