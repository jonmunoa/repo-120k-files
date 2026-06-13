// fichero 25005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25005;

Registro25005 crear_registro25005(int id) {
    Registro25005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25005(Registro25005 r) {
    return r.valor + r.id;
}
