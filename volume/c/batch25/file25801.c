// fichero 25801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25801;

Registro25801 crear_registro25801(int id) {
    Registro25801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25801(Registro25801 r) {
    return r.valor + r.id;
}
