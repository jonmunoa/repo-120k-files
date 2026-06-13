// fichero 25405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25405;

Registro25405 crear_registro25405(int id) {
    Registro25405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25405(Registro25405 r) {
    return r.valor + r.id;
}
