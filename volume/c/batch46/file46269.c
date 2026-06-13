// fichero 46269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46269;

Registro46269 crear_registro46269(int id) {
    Registro46269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46269(Registro46269 r) {
    return r.valor + r.id;
}
