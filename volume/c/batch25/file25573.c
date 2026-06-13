// fichero 25573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25573;

Registro25573 crear_registro25573(int id) {
    Registro25573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25573(Registro25573 r) {
    return r.valor + r.id;
}
