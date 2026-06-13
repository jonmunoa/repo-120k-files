// fichero 54281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54281;

Registro54281 crear_registro54281(int id) {
    Registro54281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54281(Registro54281 r) {
    return r.valor + r.id;
}
