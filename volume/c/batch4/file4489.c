// fichero 4489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4489;

Registro4489 crear_registro4489(int id) {
    Registro4489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4489(Registro4489 r) {
    return r.valor + r.id;
}
