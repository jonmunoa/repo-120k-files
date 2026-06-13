// fichero 43125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43125;

Registro43125 crear_registro43125(int id) {
    Registro43125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43125(Registro43125 r) {
    return r.valor + r.id;
}
