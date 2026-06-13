// fichero 3725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3725;

Registro3725 crear_registro3725(int id) {
    Registro3725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3725(Registro3725 r) {
    return r.valor + r.id;
}
