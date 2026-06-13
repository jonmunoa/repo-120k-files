// fichero 2537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2537;

Registro2537 crear_registro2537(int id) {
    Registro2537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2537(Registro2537 r) {
    return r.valor + r.id;
}
