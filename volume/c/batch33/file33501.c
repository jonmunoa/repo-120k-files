// fichero 33501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33501;

Registro33501 crear_registro33501(int id) {
    Registro33501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33501(Registro33501 r) {
    return r.valor + r.id;
}
