// fichero 19189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19189;

Registro19189 crear_registro19189(int id) {
    Registro19189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19189(Registro19189 r) {
    return r.valor + r.id;
}
