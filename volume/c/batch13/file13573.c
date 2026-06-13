// fichero 13573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13573;

Registro13573 crear_registro13573(int id) {
    Registro13573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13573(Registro13573 r) {
    return r.valor + r.id;
}
