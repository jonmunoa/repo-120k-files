// fichero 24473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24473;

Registro24473 crear_registro24473(int id) {
    Registro24473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24473(Registro24473 r) {
    return r.valor + r.id;
}
