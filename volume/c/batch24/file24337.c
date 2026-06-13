// fichero 24337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24337;

Registro24337 crear_registro24337(int id) {
    Registro24337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24337(Registro24337 r) {
    return r.valor + r.id;
}
