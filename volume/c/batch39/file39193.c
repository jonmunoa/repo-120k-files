// fichero 39193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39193;

Registro39193 crear_registro39193(int id) {
    Registro39193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39193(Registro39193 r) {
    return r.valor + r.id;
}
