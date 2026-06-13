// fichero 1437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1437;

Registro1437 crear_registro1437(int id) {
    Registro1437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1437(Registro1437 r) {
    return r.valor + r.id;
}
