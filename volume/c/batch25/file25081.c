// fichero 25081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25081;

Registro25081 crear_registro25081(int id) {
    Registro25081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25081(Registro25081 r) {
    return r.valor + r.id;
}
