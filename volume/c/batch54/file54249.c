// fichero 54249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54249;

Registro54249 crear_registro54249(int id) {
    Registro54249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54249(Registro54249 r) {
    return r.valor + r.id;
}
