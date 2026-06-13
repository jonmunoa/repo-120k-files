// fichero 25373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25373;

Registro25373 crear_registro25373(int id) {
    Registro25373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25373(Registro25373 r) {
    return r.valor + r.id;
}
