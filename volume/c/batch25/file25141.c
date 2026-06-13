// fichero 25141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25141;

Registro25141 crear_registro25141(int id) {
    Registro25141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25141(Registro25141 r) {
    return r.valor + r.id;
}
