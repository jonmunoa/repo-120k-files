// fichero 25633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25633;

Registro25633 crear_registro25633(int id) {
    Registro25633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25633(Registro25633 r) {
    return r.valor + r.id;
}
