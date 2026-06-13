// fichero 25089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25089;

Registro25089 crear_registro25089(int id) {
    Registro25089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25089(Registro25089 r) {
    return r.valor + r.id;
}
