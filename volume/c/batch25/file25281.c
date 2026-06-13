// fichero 25281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25281;

Registro25281 crear_registro25281(int id) {
    Registro25281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25281(Registro25281 r) {
    return r.valor + r.id;
}
