// fichero 25389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25389;

Registro25389 crear_registro25389(int id) {
    Registro25389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25389(Registro25389 r) {
    return r.valor + r.id;
}
