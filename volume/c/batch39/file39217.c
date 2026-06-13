// fichero 39217 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39217;

Registro39217 crear_registro39217(int id) {
    Registro39217 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39217(Registro39217 r) {
    return r.valor + r.id;
}
