// fichero 47233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47233;

Registro47233 crear_registro47233(int id) {
    Registro47233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47233(Registro47233 r) {
    return r.valor + r.id;
}
