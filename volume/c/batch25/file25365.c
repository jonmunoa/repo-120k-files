// fichero 25365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25365;

Registro25365 crear_registro25365(int id) {
    Registro25365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25365(Registro25365 r) {
    return r.valor + r.id;
}
