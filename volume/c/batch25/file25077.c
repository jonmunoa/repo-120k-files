// fichero 25077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25077;

Registro25077 crear_registro25077(int id) {
    Registro25077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25077(Registro25077 r) {
    return r.valor + r.id;
}
