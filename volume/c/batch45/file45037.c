// fichero 45037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45037;

Registro45037 crear_registro45037(int id) {
    Registro45037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45037(Registro45037 r) {
    return r.valor + r.id;
}
