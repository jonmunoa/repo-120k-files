// fichero 25021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25021;

Registro25021 crear_registro25021(int id) {
    Registro25021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25021(Registro25021 r) {
    return r.valor + r.id;
}
