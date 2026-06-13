// fichero 25269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25269;

Registro25269 crear_registro25269(int id) {
    Registro25269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25269(Registro25269 r) {
    return r.valor + r.id;
}
