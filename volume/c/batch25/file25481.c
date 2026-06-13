// fichero 25481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25481;

Registro25481 crear_registro25481(int id) {
    Registro25481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25481(Registro25481 r) {
    return r.valor + r.id;
}
