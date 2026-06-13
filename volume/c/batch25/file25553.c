// fichero 25553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25553;

Registro25553 crear_registro25553(int id) {
    Registro25553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25553(Registro25553 r) {
    return r.valor + r.id;
}
