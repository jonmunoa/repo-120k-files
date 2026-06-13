// fichero 25541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25541;

Registro25541 crear_registro25541(int id) {
    Registro25541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25541(Registro25541 r) {
    return r.valor + r.id;
}
