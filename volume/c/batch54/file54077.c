// fichero 54077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54077;

Registro54077 crear_registro54077(int id) {
    Registro54077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54077(Registro54077 r) {
    return r.valor + r.id;
}
