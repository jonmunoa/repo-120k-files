// fichero 45341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45341;

Registro45341 crear_registro45341(int id) {
    Registro45341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45341(Registro45341 r) {
    return r.valor + r.id;
}
