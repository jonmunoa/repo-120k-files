// fichero 25797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25797;

Registro25797 crear_registro25797(int id) {
    Registro25797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25797(Registro25797 r) {
    return r.valor + r.id;
}
