// fichero 39641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39641;

Registro39641 crear_registro39641(int id) {
    Registro39641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39641(Registro39641 r) {
    return r.valor + r.id;
}
