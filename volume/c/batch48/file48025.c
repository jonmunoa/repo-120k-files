// fichero 48025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48025;

Registro48025 crear_registro48025(int id) {
    Registro48025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48025(Registro48025 r) {
    return r.valor + r.id;
}
