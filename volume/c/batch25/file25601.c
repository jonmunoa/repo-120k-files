// fichero 25601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25601;

Registro25601 crear_registro25601(int id) {
    Registro25601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25601(Registro25601 r) {
    return r.valor + r.id;
}
