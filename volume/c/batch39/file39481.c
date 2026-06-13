// fichero 39481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39481;

Registro39481 crear_registro39481(int id) {
    Registro39481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39481(Registro39481 r) {
    return r.valor + r.id;
}
