// fichero 46661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46661;

Registro46661 crear_registro46661(int id) {
    Registro46661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46661(Registro46661 r) {
    return r.valor + r.id;
}
