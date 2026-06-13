// fichero 25337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25337;

Registro25337 crear_registro25337(int id) {
    Registro25337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25337(Registro25337 r) {
    return r.valor + r.id;
}
