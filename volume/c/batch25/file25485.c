// fichero 25485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25485;

Registro25485 crear_registro25485(int id) {
    Registro25485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25485(Registro25485 r) {
    return r.valor + r.id;
}
