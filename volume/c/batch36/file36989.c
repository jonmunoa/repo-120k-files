// fichero 36989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36989;

Registro36989 crear_registro36989(int id) {
    Registro36989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36989(Registro36989 r) {
    return r.valor + r.id;
}
