// fichero 25157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25157;

Registro25157 crear_registro25157(int id) {
    Registro25157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25157(Registro25157 r) {
    return r.valor + r.id;
}
