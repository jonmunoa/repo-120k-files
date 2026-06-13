// fichero 25845 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25845;

Registro25845 crear_registro25845(int id) {
    Registro25845 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25845(Registro25845 r) {
    return r.valor + r.id;
}
