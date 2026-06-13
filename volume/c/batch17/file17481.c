// fichero 17481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17481;

Registro17481 crear_registro17481(int id) {
    Registro17481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17481(Registro17481 r) {
    return r.valor + r.id;
}
