// fichero 45349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45349;

Registro45349 crear_registro45349(int id) {
    Registro45349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45349(Registro45349 r) {
    return r.valor + r.id;
}
