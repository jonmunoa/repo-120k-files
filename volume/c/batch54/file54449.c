// fichero 54449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54449;

Registro54449 crear_registro54449(int id) {
    Registro54449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54449(Registro54449 r) {
    return r.valor + r.id;
}
