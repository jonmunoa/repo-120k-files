// fichero 25909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25909;

Registro25909 crear_registro25909(int id) {
    Registro25909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25909(Registro25909 r) {
    return r.valor + r.id;
}
