// fichero 25597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25597;

Registro25597 crear_registro25597(int id) {
    Registro25597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25597(Registro25597 r) {
    return r.valor + r.id;
}
