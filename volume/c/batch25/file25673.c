// fichero 25673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25673;

Registro25673 crear_registro25673(int id) {
    Registro25673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25673(Registro25673 r) {
    return r.valor + r.id;
}
