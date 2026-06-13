// fichero 39141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39141;

Registro39141 crear_registro39141(int id) {
    Registro39141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39141(Registro39141 r) {
    return r.valor + r.id;
}
