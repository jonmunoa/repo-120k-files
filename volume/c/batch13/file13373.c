// fichero 13373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13373;

Registro13373 crear_registro13373(int id) {
    Registro13373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13373(Registro13373 r) {
    return r.valor + r.id;
}
