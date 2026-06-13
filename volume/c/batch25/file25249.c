// fichero 25249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25249;

Registro25249 crear_registro25249(int id) {
    Registro25249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25249(Registro25249 r) {
    return r.valor + r.id;
}
