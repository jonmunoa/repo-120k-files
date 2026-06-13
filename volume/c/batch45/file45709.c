// fichero 45709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45709;

Registro45709 crear_registro45709(int id) {
    Registro45709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45709(Registro45709 r) {
    return r.valor + r.id;
}
