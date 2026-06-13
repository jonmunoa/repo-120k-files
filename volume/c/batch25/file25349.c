// fichero 25349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25349;

Registro25349 crear_registro25349(int id) {
    Registro25349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25349(Registro25349 r) {
    return r.valor + r.id;
}
