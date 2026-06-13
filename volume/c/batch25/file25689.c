// fichero 25689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25689;

Registro25689 crear_registro25689(int id) {
    Registro25689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25689(Registro25689 r) {
    return r.valor + r.id;
}
