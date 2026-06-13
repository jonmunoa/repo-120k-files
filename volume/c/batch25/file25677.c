// fichero 25677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25677;

Registro25677 crear_registro25677(int id) {
    Registro25677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25677(Registro25677 r) {
    return r.valor + r.id;
}
