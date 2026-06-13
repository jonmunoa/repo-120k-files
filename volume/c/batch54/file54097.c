// fichero 54097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54097;

Registro54097 crear_registro54097(int id) {
    Registro54097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54097(Registro54097 r) {
    return r.valor + r.id;
}
