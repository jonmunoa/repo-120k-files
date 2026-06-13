// fichero 48305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48305;

Registro48305 crear_registro48305(int id) {
    Registro48305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48305(Registro48305 r) {
    return r.valor + r.id;
}
