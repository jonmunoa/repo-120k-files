// fichero 13733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13733;

Registro13733 crear_registro13733(int id) {
    Registro13733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13733(Registro13733 r) {
    return r.valor + r.id;
}
