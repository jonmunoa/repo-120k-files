// fichero 973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro973;

Registro973 crear_registro973(int id) {
    Registro973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro973(Registro973 r) {
    return r.valor + r.id;
}
