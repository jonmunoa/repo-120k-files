// fichero 25733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25733;

Registro25733 crear_registro25733(int id) {
    Registro25733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25733(Registro25733 r) {
    return r.valor + r.id;
}
