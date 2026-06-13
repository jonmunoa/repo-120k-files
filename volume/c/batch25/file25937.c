// fichero 25937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25937;

Registro25937 crear_registro25937(int id) {
    Registro25937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25937(Registro25937 r) {
    return r.valor + r.id;
}
