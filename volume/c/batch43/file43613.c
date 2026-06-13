// fichero 43613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43613;

Registro43613 crear_registro43613(int id) {
    Registro43613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43613(Registro43613 r) {
    return r.valor + r.id;
}
