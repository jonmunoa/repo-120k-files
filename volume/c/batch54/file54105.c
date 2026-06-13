// fichero 54105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54105;

Registro54105 crear_registro54105(int id) {
    Registro54105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54105(Registro54105 r) {
    return r.valor + r.id;
}
