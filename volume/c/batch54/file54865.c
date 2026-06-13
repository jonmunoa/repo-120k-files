// fichero 54865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54865;

Registro54865 crear_registro54865(int id) {
    Registro54865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54865(Registro54865 r) {
    return r.valor + r.id;
}
