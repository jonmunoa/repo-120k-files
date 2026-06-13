// fichero 54257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54257;

Registro54257 crear_registro54257(int id) {
    Registro54257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54257(Registro54257 r) {
    return r.valor + r.id;
}
