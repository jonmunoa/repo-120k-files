// fichero 25497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25497;

Registro25497 crear_registro25497(int id) {
    Registro25497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25497(Registro25497 r) {
    return r.valor + r.id;
}
