// fichero 25357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25357;

Registro25357 crear_registro25357(int id) {
    Registro25357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25357(Registro25357 r) {
    return r.valor + r.id;
}
