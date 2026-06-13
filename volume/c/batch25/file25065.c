// fichero 25065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25065;

Registro25065 crear_registro25065(int id) {
    Registro25065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25065(Registro25065 r) {
    return r.valor + r.id;
}
