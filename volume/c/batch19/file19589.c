// fichero 19589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19589;

Registro19589 crear_registro19589(int id) {
    Registro19589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19589(Registro19589 r) {
    return r.valor + r.id;
}
