// fichero 25133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25133;

Registro25133 crear_registro25133(int id) {
    Registro25133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25133(Registro25133 r) {
    return r.valor + r.id;
}
