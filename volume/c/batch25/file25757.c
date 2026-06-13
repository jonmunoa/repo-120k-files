// fichero 25757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25757;

Registro25757 crear_registro25757(int id) {
    Registro25757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25757(Registro25757 r) {
    return r.valor + r.id;
}
