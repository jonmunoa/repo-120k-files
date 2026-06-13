// fichero 21589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21589;

Registro21589 crear_registro21589(int id) {
    Registro21589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21589(Registro21589 r) {
    return r.valor + r.id;
}
