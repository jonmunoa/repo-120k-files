// fichero 15349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15349;

Registro15349 crear_registro15349(int id) {
    Registro15349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15349(Registro15349 r) {
    return r.valor + r.id;
}
