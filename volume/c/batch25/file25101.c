// fichero 25101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25101;

Registro25101 crear_registro25101(int id) {
    Registro25101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25101(Registro25101 r) {
    return r.valor + r.id;
}
