// fichero 37973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37973;

Registro37973 crear_registro37973(int id) {
    Registro37973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37973(Registro37973 r) {
    return r.valor + r.id;
}
