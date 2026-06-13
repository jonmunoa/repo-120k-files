// fichero 25189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25189;

Registro25189 crear_registro25189(int id) {
    Registro25189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25189(Registro25189 r) {
    return r.valor + r.id;
}
