// fichero 25325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25325;

Registro25325 crear_registro25325(int id) {
    Registro25325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25325(Registro25325 r) {
    return r.valor + r.id;
}
