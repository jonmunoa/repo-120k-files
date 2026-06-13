// fichero 48061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48061;

Registro48061 crear_registro48061(int id) {
    Registro48061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48061(Registro48061 r) {
    return r.valor + r.id;
}
