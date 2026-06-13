// fichero 54421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54421;

Registro54421 crear_registro54421(int id) {
    Registro54421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54421(Registro54421 r) {
    return r.valor + r.id;
}
