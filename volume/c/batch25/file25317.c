// fichero 25317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25317;

Registro25317 crear_registro25317(int id) {
    Registro25317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25317(Registro25317 r) {
    return r.valor + r.id;
}
