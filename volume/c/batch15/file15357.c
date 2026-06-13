// fichero 15357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15357;

Registro15357 crear_registro15357(int id) {
    Registro15357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15357(Registro15357 r) {
    return r.valor + r.id;
}
