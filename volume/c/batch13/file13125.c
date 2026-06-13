// fichero 13125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13125;

Registro13125 crear_registro13125(int id) {
    Registro13125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13125(Registro13125 r) {
    return r.valor + r.id;
}
