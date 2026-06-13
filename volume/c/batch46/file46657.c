// fichero 46657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46657;

Registro46657 crear_registro46657(int id) {
    Registro46657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46657(Registro46657 r) {
    return r.valor + r.id;
}
