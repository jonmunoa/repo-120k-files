// fichero 43725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43725;

Registro43725 crear_registro43725(int id) {
    Registro43725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43725(Registro43725 r) {
    return r.valor + r.id;
}
