// fichero 48269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48269;

Registro48269 crear_registro48269(int id) {
    Registro48269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48269(Registro48269 r) {
    return r.valor + r.id;
}
