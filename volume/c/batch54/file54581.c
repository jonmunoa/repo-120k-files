// fichero 54581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54581;

Registro54581 crear_registro54581(int id) {
    Registro54581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54581(Registro54581 r) {
    return r.valor + r.id;
}
