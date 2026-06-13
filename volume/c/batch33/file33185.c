// fichero 33185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33185;

Registro33185 crear_registro33185(int id) {
    Registro33185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33185(Registro33185 r) {
    return r.valor + r.id;
}
