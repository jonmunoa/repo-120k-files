// fichero 24709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24709;

Registro24709 crear_registro24709(int id) {
    Registro24709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24709(Registro24709 r) {
    return r.valor + r.id;
}
