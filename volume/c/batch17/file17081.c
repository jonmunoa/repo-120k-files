// fichero 17081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17081;

Registro17081 crear_registro17081(int id) {
    Registro17081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17081(Registro17081 r) {
    return r.valor + r.id;
}
