// fichero 39477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39477;

Registro39477 crear_registro39477(int id) {
    Registro39477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39477(Registro39477 r) {
    return r.valor + r.id;
}
