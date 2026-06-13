// fichero 43389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43389;

Registro43389 crear_registro43389(int id) {
    Registro43389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43389(Registro43389 r) {
    return r.valor + r.id;
}
