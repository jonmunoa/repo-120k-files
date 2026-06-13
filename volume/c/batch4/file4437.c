// fichero 4437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4437;

Registro4437 crear_registro4437(int id) {
    Registro4437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4437(Registro4437 r) {
    return r.valor + r.id;
}
