// fichero 43529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43529;

Registro43529 crear_registro43529(int id) {
    Registro43529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43529(Registro43529 r) {
    return r.valor + r.id;
}
