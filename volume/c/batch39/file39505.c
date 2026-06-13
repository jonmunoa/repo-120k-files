// fichero 39505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39505;

Registro39505 crear_registro39505(int id) {
    Registro39505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39505(Registro39505 r) {
    return r.valor + r.id;
}
