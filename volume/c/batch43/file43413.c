// fichero 43413 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43413;

Registro43413 crear_registro43413(int id) {
    Registro43413 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43413(Registro43413 r) {
    return r.valor + r.id;
}
