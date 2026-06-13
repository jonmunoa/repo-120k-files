// fichero 25729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25729;

Registro25729 crear_registro25729(int id) {
    Registro25729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25729(Registro25729 r) {
    return r.valor + r.id;
}
