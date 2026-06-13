// fichero 25257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25257;

Registro25257 crear_registro25257(int id) {
    Registro25257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25257(Registro25257 r) {
    return r.valor + r.id;
}
