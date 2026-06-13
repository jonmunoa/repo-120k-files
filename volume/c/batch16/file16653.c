// fichero 16653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16653;

Registro16653 crear_registro16653(int id) {
    Registro16653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16653(Registro16653 r) {
    return r.valor + r.id;
}
