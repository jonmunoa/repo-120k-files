// fichero 13245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13245;

Registro13245 crear_registro13245(int id) {
    Registro13245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13245(Registro13245 r) {
    return r.valor + r.id;
}
