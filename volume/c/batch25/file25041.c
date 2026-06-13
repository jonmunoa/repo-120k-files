// fichero 25041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25041;

Registro25041 crear_registro25041(int id) {
    Registro25041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25041(Registro25041 r) {
    return r.valor + r.id;
}
