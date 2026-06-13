// fichero 54797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54797;

Registro54797 crear_registro54797(int id) {
    Registro54797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54797(Registro54797 r) {
    return r.valor + r.id;
}
