// fichero 48585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48585;

Registro48585 crear_registro48585(int id) {
    Registro48585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48585(Registro48585 r) {
    return r.valor + r.id;
}
