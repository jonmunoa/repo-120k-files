// fichero 39585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39585;

Registro39585 crear_registro39585(int id) {
    Registro39585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39585(Registro39585 r) {
    return r.valor + r.id;
}
