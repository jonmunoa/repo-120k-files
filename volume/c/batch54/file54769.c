// fichero 54769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54769;

Registro54769 crear_registro54769(int id) {
    Registro54769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54769(Registro54769 r) {
    return r.valor + r.id;
}
