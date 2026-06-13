// fichero 19409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19409;

Registro19409 crear_registro19409(int id) {
    Registro19409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19409(Registro19409 r) {
    return r.valor + r.id;
}
