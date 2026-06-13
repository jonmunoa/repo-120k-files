// fichero 54725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54725;

Registro54725 crear_registro54725(int id) {
    Registro54725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54725(Registro54725 r) {
    return r.valor + r.id;
}
