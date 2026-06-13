// fichero 19349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19349;

Registro19349 crear_registro19349(int id) {
    Registro19349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19349(Registro19349 r) {
    return r.valor + r.id;
}
