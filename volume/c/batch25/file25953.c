// fichero 25953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25953;

Registro25953 crear_registro25953(int id) {
    Registro25953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25953(Registro25953 r) {
    return r.valor + r.id;
}
