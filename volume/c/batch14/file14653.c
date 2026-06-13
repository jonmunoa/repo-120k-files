// fichero 14653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14653;

Registro14653 crear_registro14653(int id) {
    Registro14653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14653(Registro14653 r) {
    return r.valor + r.id;
}
