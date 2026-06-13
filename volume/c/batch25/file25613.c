// fichero 25613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25613;

Registro25613 crear_registro25613(int id) {
    Registro25613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25613(Registro25613 r) {
    return r.valor + r.id;
}
