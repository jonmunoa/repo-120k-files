// fichero 39521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39521;

Registro39521 crear_registro39521(int id) {
    Registro39521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39521(Registro39521 r) {
    return r.valor + r.id;
}
