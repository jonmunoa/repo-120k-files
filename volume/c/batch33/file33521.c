// fichero 33521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33521;

Registro33521 crear_registro33521(int id) {
    Registro33521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33521(Registro33521 r) {
    return r.valor + r.id;
}
