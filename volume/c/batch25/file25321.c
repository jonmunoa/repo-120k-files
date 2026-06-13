// fichero 25321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25321;

Registro25321 crear_registro25321(int id) {
    Registro25321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25321(Registro25321 r) {
    return r.valor + r.id;
}
