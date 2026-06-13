// fichero 45465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45465;

Registro45465 crear_registro45465(int id) {
    Registro45465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45465(Registro45465 r) {
    return r.valor + r.id;
}
