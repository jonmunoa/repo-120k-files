// fichero 25665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25665;

Registro25665 crear_registro25665(int id) {
    Registro25665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25665(Registro25665 r) {
    return r.valor + r.id;
}
