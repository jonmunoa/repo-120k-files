// fichero 48561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48561;

Registro48561 crear_registro48561(int id) {
    Registro48561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48561(Registro48561 r) {
    return r.valor + r.id;
}
