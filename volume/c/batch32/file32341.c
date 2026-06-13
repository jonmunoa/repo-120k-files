// fichero 32341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32341;

Registro32341 crear_registro32341(int id) {
    Registro32341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32341(Registro32341 r) {
    return r.valor + r.id;
}
