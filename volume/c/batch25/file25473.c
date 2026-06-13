// fichero 25473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25473;

Registro25473 crear_registro25473(int id) {
    Registro25473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25473(Registro25473 r) {
    return r.valor + r.id;
}
