// fichero 16525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16525;

Registro16525 crear_registro16525(int id) {
    Registro16525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16525(Registro16525 r) {
    return r.valor + r.id;
}
