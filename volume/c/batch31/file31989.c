// fichero 31989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31989;

Registro31989 crear_registro31989(int id) {
    Registro31989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31989(Registro31989 r) {
    return r.valor + r.id;
}
