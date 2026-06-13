// fichero 25921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25921;

Registro25921 crear_registro25921(int id) {
    Registro25921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25921(Registro25921 r) {
    return r.valor + r.id;
}
