// fichero 54557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54557;

Registro54557 crear_registro54557(int id) {
    Registro54557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54557(Registro54557 r) {
    return r.valor + r.id;
}
