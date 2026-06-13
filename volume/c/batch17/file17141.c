// fichero 17141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17141;

Registro17141 crear_registro17141(int id) {
    Registro17141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17141(Registro17141 r) {
    return r.valor + r.id;
}
