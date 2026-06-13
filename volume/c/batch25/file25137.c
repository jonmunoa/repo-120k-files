// fichero 25137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25137;

Registro25137 crear_registro25137(int id) {
    Registro25137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25137(Registro25137 r) {
    return r.valor + r.id;
}
