// fichero 45233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45233;

Registro45233 crear_registro45233(int id) {
    Registro45233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45233(Registro45233 r) {
    return r.valor + r.id;
}
