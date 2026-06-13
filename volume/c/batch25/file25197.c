// fichero 25197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro25197;

Registro25197 crear_registro25197(int id) {
    Registro25197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro25197(Registro25197 r) {
    return r.valor + r.id;
}
