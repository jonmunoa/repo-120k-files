// fichero 25013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25013;

Registro25013 crear_registro25013(int id) {
    Registro25013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25013(Registro25013 r) {
    return r.valor + r.id;
}
