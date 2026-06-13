// fichero 25033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25033;

Registro25033 crear_registro25033(int id) {
    Registro25033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25033(Registro25033 r) {
    return r.valor + r.id;
}
