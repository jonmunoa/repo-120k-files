// fichero 46797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46797;

Registro46797 crear_registro46797(int id) {
    Registro46797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46797(Registro46797 r) {
    return r.valor + r.id;
}
