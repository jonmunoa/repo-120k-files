// fichero 25173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25173;

Registro25173 crear_registro25173(int id) {
    Registro25173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25173(Registro25173 r) {
    return r.valor + r.id;
}
