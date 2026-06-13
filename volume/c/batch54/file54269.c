// fichero 54269 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54269;

Registro54269 crear_registro54269(int id) {
    Registro54269 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54269(Registro54269 r) {
    return r.valor + r.id;
}
