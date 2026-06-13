// fichero 25253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25253;

Registro25253 crear_registro25253(int id) {
    Registro25253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25253(Registro25253 r) {
    return r.valor + r.id;
}
