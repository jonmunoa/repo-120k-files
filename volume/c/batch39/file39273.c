// fichero 39273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39273;

Registro39273 crear_registro39273(int id) {
    Registro39273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39273(Registro39273 r) {
    return r.valor + r.id;
}
