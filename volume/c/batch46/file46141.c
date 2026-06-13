// fichero 46141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46141;

Registro46141 crear_registro46141(int id) {
    Registro46141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46141(Registro46141 r) {
    return r.valor + r.id;
}
