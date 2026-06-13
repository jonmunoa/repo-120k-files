// fichero 25605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25605;

Registro25605 crear_registro25605(int id) {
    Registro25605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25605(Registro25605 r) {
    return r.valor + r.id;
}
