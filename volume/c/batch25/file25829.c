// fichero 25829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25829;

Registro25829 crear_registro25829(int id) {
    Registro25829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25829(Registro25829 r) {
    return r.valor + r.id;
}
