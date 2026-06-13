// fichero 25625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25625;

Registro25625 crear_registro25625(int id) {
    Registro25625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25625(Registro25625 r) {
    return r.valor + r.id;
}
