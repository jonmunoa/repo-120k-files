// fichero 25861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25861;

Registro25861 crear_registro25861(int id) {
    Registro25861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25861(Registro25861 r) {
    return r.valor + r.id;
}
