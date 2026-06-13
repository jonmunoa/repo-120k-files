// fichero 37709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37709;

Registro37709 crear_registro37709(int id) {
    Registro37709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37709(Registro37709 r) {
    return r.valor + r.id;
}
