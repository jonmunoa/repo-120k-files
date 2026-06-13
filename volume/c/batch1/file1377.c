// fichero 1377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1377;

Registro1377 crear_registro1377(int id) {
    Registro1377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1377(Registro1377 r) {
    return r.valor + r.id;
}
