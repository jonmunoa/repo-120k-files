// fichero 43025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43025;

Registro43025 crear_registro43025(int id) {
    Registro43025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43025(Registro43025 r) {
    return r.valor + r.id;
}
