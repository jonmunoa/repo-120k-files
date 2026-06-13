// fichero 7337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7337;

Registro7337 crear_registro7337(int id) {
    Registro7337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7337(Registro7337 r) {
    return r.valor + r.id;
}
