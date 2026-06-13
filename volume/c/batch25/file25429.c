// fichero 25429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25429;

Registro25429 crear_registro25429(int id) {
    Registro25429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25429(Registro25429 r) {
    return r.valor + r.id;
}
