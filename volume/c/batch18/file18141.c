// fichero 18141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18141;

Registro18141 crear_registro18141(int id) {
    Registro18141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18141(Registro18141 r) {
    return r.valor + r.id;
}
