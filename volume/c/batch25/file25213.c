// fichero 25213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25213;

Registro25213 crear_registro25213(int id) {
    Registro25213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25213(Registro25213 r) {
    return r.valor + r.id;
}
