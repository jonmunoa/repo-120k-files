// fichero 25557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25557;

Registro25557 crear_registro25557(int id) {
    Registro25557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25557(Registro25557 r) {
    return r.valor + r.id;
}
