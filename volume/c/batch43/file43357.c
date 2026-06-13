// fichero 43357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43357;

Registro43357 crear_registro43357(int id) {
    Registro43357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43357(Registro43357 r) {
    return r.valor + r.id;
}
