// fichero 7709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7709;

Registro7709 crear_registro7709(int id) {
    Registro7709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7709(Registro7709 r) {
    return r.valor + r.id;
}
