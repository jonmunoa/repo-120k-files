// fichero 25621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25621;

Registro25621 crear_registro25621(int id) {
    Registro25621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25621(Registro25621 r) {
    return r.valor + r.id;
}
