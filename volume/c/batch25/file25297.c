// fichero 25297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25297;

Registro25297 crear_registro25297(int id) {
    Registro25297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25297(Registro25297 r) {
    return r.valor + r.id;
}
