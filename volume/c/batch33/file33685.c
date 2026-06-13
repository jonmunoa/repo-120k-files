// fichero 33685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33685;

Registro33685 crear_registro33685(int id) {
    Registro33685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33685(Registro33685 r) {
    return r.valor + r.id;
}
