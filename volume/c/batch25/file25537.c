// fichero 25537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25537;

Registro25537 crear_registro25537(int id) {
    Registro25537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25537(Registro25537 r) {
    return r.valor + r.id;
}
