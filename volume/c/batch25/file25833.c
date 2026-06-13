// fichero 25833 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25833;

Registro25833 crear_registro25833(int id) {
    Registro25833 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25833(Registro25833 r) {
    return r.valor + r.id;
}
