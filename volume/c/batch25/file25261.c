// fichero 25261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25261;

Registro25261 crear_registro25261(int id) {
    Registro25261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25261(Registro25261 r) {
    return r.valor + r.id;
}
