// fichero 25769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25769;

Registro25769 crear_registro25769(int id) {
    Registro25769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25769(Registro25769 r) {
    return r.valor + r.id;
}
