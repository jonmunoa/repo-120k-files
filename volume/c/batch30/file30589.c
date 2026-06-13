// fichero 30589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30589;

Registro30589 crear_registro30589(int id) {
    Registro30589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30589(Registro30589 r) {
    return r.valor + r.id;
}
