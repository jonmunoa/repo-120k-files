// fichero 13529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13529;

Registro13529 crear_registro13529(int id) {
    Registro13529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13529(Registro13529 r) {
    return r.valor + r.id;
}
