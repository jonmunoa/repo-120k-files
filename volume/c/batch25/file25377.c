// fichero 25377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25377;

Registro25377 crear_registro25377(int id) {
    Registro25377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25377(Registro25377 r) {
    return r.valor + r.id;
}
