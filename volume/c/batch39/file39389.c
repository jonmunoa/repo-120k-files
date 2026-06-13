// fichero 39389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39389;

Registro39389 crear_registro39389(int id) {
    Registro39389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39389(Registro39389 r) {
    return r.valor + r.id;
}
