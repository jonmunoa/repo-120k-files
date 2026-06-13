// fichero 39973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39973;

Registro39973 crear_registro39973(int id) {
    Registro39973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39973(Registro39973 r) {
    return r.valor + r.id;
}
