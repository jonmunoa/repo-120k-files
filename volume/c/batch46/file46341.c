// fichero 46341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46341;

Registro46341 crear_registro46341(int id) {
    Registro46341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46341(Registro46341 r) {
    return r.valor + r.id;
}
