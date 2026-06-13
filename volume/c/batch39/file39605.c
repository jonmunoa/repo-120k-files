// fichero 39605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39605;

Registro39605 crear_registro39605(int id) {
    Registro39605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39605(Registro39605 r) {
    return r.valor + r.id;
}
