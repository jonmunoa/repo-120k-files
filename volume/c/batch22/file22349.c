// fichero 22349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22349;

Registro22349 crear_registro22349(int id) {
    Registro22349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22349(Registro22349 r) {
    return r.valor + r.id;
}
