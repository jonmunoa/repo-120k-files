// fichero 46025 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46025;

Registro46025 crear_registro46025(int id) {
    Registro46025 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46025(Registro46025 r) {
    return r.valor + r.id;
}
