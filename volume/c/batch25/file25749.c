// fichero 25749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25749;

Registro25749 crear_registro25749(int id) {
    Registro25749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25749(Registro25749 r) {
    return r.valor + r.id;
}
