// fichero 13597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13597;

Registro13597 crear_registro13597(int id) {
    Registro13597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13597(Registro13597 r) {
    return r.valor + r.id;
}
