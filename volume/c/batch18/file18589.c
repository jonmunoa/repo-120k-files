// fichero 18589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18589;

Registro18589 crear_registro18589(int id) {
    Registro18589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18589(Registro18589 r) {
    return r.valor + r.id;
}
