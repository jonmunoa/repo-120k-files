// fichero 25177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25177;

Registro25177 crear_registro25177(int id) {
    Registro25177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25177(Registro25177 r) {
    return r.valor + r.id;
}
