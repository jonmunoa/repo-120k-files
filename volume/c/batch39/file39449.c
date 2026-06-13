// fichero 39449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39449;

Registro39449 crear_registro39449(int id) {
    Registro39449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39449(Registro39449 r) {
    return r.valor + r.id;
}
