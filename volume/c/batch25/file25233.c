// fichero 25233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25233;

Registro25233 crear_registro25233(int id) {
    Registro25233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25233(Registro25233 r) {
    return r.valor + r.id;
}
