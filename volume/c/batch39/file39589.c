// fichero 39589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39589;

Registro39589 crear_registro39589(int id) {
    Registro39589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39589(Registro39589 r) {
    return r.valor + r.id;
}
