// fichero 48285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48285;

Registro48285 crear_registro48285(int id) {
    Registro48285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48285(Registro48285 r) {
    return r.valor + r.id;
}
