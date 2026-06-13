// fichero 25341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25341;

Registro25341 crear_registro25341(int id) {
    Registro25341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25341(Registro25341 r) {
    return r.valor + r.id;
}
