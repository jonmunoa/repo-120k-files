// fichero 653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro653;

Registro653 crear_registro653(int id) {
    Registro653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro653(Registro653 r) {
    return r.valor + r.id;
}
