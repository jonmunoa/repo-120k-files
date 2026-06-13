// fichero 25097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25097;

Registro25097 crear_registro25097(int id) {
    Registro25097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25097(Registro25097 r) {
    return r.valor + r.id;
}
