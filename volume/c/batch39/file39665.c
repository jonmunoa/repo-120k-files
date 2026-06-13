// fichero 39665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39665;

Registro39665 crear_registro39665(int id) {
    Registro39665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39665(Registro39665 r) {
    return r.valor + r.id;
}
