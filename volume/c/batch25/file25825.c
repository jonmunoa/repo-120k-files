// fichero 25825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25825;

Registro25825 crear_registro25825(int id) {
    Registro25825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25825(Registro25825 r) {
    return r.valor + r.id;
}
