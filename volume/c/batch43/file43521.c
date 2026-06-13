// fichero 43521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43521;

Registro43521 crear_registro43521(int id) {
    Registro43521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43521(Registro43521 r) {
    return r.valor + r.id;
}
