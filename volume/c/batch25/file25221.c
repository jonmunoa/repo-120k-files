// fichero 25221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25221;

Registro25221 crear_registro25221(int id) {
    Registro25221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25221(Registro25221 r) {
    return r.valor + r.id;
}
