// fichero 43021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43021;

Registro43021 crear_registro43021(int id) {
    Registro43021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43021(Registro43021 r) {
    return r.valor + r.id;
}
