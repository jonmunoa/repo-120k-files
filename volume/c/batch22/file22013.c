// fichero 22013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22013;

Registro22013 crear_registro22013(int id) {
    Registro22013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22013(Registro22013 r) {
    return r.valor + r.id;
}
