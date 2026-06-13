// fichero 33357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33357;

Registro33357 crear_registro33357(int id) {
    Registro33357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33357(Registro33357 r) {
    return r.valor + r.id;
}
