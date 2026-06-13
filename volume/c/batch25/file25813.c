// fichero 25813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25813;

Registro25813 crear_registro25813(int id) {
    Registro25813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25813(Registro25813 r) {
    return r.valor + r.id;
}
