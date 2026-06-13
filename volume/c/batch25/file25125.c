// fichero 25125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25125;

Registro25125 crear_registro25125(int id) {
    Registro25125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25125(Registro25125 r) {
    return r.valor + r.id;
}
