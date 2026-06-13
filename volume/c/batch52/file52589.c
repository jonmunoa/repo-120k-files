// fichero 52589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52589;

Registro52589 crear_registro52589(int id) {
    Registro52589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52589(Registro52589 r) {
    return r.valor + r.id;
}
