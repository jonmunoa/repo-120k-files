// fichero 48357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48357;

Registro48357 crear_registro48357(int id) {
    Registro48357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48357(Registro48357 r) {
    return r.valor + r.id;
}
