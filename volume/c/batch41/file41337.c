// fichero 41337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41337;

Registro41337 crear_registro41337(int id) {
    Registro41337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41337(Registro41337 r) {
    return r.valor + r.id;
}
