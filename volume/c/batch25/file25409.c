// fichero 25409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25409;

Registro25409 crear_registro25409(int id) {
    Registro25409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25409(Registro25409 r) {
    return r.valor + r.id;
}
