// fichero 42357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42357;

Registro42357 crear_registro42357(int id) {
    Registro42357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42357(Registro42357 r) {
    return r.valor + r.id;
}
