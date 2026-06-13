// fichero 25369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25369;

Registro25369 crear_registro25369(int id) {
    Registro25369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25369(Registro25369 r) {
    return r.valor + r.id;
}
