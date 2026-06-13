// fichero 39433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39433;

Registro39433 crear_registro39433(int id) {
    Registro39433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39433(Registro39433 r) {
    return r.valor + r.id;
}
