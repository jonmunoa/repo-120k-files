// fichero 25653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25653;

Registro25653 crear_registro25653(int id) {
    Registro25653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25653(Registro25653 r) {
    return r.valor + r.id;
}
