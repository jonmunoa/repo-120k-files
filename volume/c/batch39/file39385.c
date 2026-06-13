// fichero 39385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39385;

Registro39385 crear_registro39385(int id) {
    Registro39385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39385(Registro39385 r) {
    return r.valor + r.id;
}
