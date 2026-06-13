// fichero 17709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17709;

Registro17709 crear_registro17709(int id) {
    Registro17709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17709(Registro17709 r) {
    return r.valor + r.id;
}
