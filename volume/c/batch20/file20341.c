// fichero 20341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20341;

Registro20341 crear_registro20341(int id) {
    Registro20341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20341(Registro20341 r) {
    return r.valor + r.id;
}
