// fichero 29589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29589;

Registro29589 crear_registro29589(int id) {
    Registro29589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29589(Registro29589 r) {
    return r.valor + r.id;
}
