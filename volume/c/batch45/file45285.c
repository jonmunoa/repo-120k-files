// fichero 45285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45285;

Registro45285 crear_registro45285(int id) {
    Registro45285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45285(Registro45285 r) {
    return r.valor + r.id;
}
