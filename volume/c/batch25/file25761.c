// fichero 25761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25761;

Registro25761 crear_registro25761(int id) {
    Registro25761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25761(Registro25761 r) {
    return r.valor + r.id;
}
