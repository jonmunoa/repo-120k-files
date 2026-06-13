// fichero 54429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54429;

Registro54429 crear_registro54429(int id) {
    Registro54429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54429(Registro54429 r) {
    return r.valor + r.id;
}
