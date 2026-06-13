// fichero 25017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25017;

Registro25017 crear_registro25017(int id) {
    Registro25017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25017(Registro25017 r) {
    return r.valor + r.id;
}
