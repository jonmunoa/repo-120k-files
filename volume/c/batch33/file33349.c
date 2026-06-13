// fichero 33349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33349;

Registro33349 crear_registro33349(int id) {
    Registro33349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33349(Registro33349 r) {
    return r.valor + r.id;
}
