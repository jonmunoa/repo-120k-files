// fichero 25585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25585;

Registro25585 crear_registro25585(int id) {
    Registro25585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25585(Registro25585 r) {
    return r.valor + r.id;
}
