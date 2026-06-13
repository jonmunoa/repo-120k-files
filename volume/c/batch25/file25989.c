// fichero 25989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25989;

Registro25989 crear_registro25989(int id) {
    Registro25989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25989(Registro25989 r) {
    return r.valor + r.id;
}
