// fichero 34337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34337;

Registro34337 crear_registro34337(int id) {
    Registro34337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34337(Registro34337 r) {
    return r.valor + r.id;
}
