// fichero 43329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43329;

Registro43329 crear_registro43329(int id) {
    Registro43329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43329(Registro43329 r) {
    return r.valor + r.id;
}
