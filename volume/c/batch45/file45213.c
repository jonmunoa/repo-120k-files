// fichero 45213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45213;

Registro45213 crear_registro45213(int id) {
    Registro45213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45213(Registro45213 r) {
    return r.valor + r.id;
}
