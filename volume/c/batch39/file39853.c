// fichero 39853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39853;

Registro39853 crear_registro39853(int id) {
    Registro39853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39853(Registro39853 r) {
    return r.valor + r.id;
}
