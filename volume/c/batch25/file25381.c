// fichero 25381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25381;

Registro25381 crear_registro25381(int id) {
    Registro25381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25381(Registro25381 r) {
    return r.valor + r.id;
}
