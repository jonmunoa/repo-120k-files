// fichero 25725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25725;

Registro25725 crear_registro25725(int id) {
    Registro25725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25725(Registro25725 r) {
    return r.valor + r.id;
}
