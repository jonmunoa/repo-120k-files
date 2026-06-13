// fichero 17029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17029;

Registro17029 crear_registro17029(int id) {
    Registro17029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17029(Registro17029 r) {
    return r.valor + r.id;
}
