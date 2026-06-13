// fichero 25433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25433;

Registro25433 crear_registro25433(int id) {
    Registro25433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25433(Registro25433 r) {
    return r.valor + r.id;
}
