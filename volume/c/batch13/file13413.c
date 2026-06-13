// fichero 13413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13413;

Registro13413 crear_registro13413(int id) {
    Registro13413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13413(Registro13413 r) {
    return r.valor + r.id;
}
