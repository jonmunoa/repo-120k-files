// fichero 46329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46329;

Registro46329 crear_registro46329(int id) {
    Registro46329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46329(Registro46329 r) {
    return r.valor + r.id;
}
