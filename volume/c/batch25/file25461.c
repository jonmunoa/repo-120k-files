// fichero 25461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25461;

Registro25461 crear_registro25461(int id) {
    Registro25461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25461(Registro25461 r) {
    return r.valor + r.id;
}
