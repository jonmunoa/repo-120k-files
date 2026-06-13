// fichero 6341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6341;

Registro6341 crear_registro6341(int id) {
    Registro6341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6341(Registro6341 r) {
    return r.valor + r.id;
}
