// fichero 25521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25521;

Registro25521 crear_registro25521(int id) {
    Registro25521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25521(Registro25521 r) {
    return r.valor + r.id;
}
