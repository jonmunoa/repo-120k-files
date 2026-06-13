// fichero 42341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42341;

Registro42341 crear_registro42341(int id) {
    Registro42341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42341(Registro42341 r) {
    return r.valor + r.id;
}
