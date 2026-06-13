// fichero 11337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11337;

Registro11337 crear_registro11337(int id) {
    Registro11337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11337(Registro11337 r) {
    return r.valor + r.id;
}
