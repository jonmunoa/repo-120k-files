// fichero 25421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25421;

Registro25421 crear_registro25421(int id) {
    Registro25421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25421(Registro25421 r) {
    return r.valor + r.id;
}
