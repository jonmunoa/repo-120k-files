// fichero 45925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45925;

Registro45925 crear_registro45925(int id) {
    Registro45925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45925(Registro45925 r) {
    return r.valor + r.id;
}
