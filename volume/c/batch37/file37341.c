// fichero 37341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37341;

Registro37341 crear_registro37341(int id) {
    Registro37341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37341(Registro37341 r) {
    return r.valor + r.id;
}
