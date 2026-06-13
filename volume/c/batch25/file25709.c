// fichero 25709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25709;

Registro25709 crear_registro25709(int id) {
    Registro25709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25709(Registro25709 r) {
    return r.valor + r.id;
}
