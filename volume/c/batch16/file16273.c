// fichero 16273 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16273;

Registro16273 crear_registro16273(int id) {
    Registro16273 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16273(Registro16273 r) {
    return r.valor + r.id;
}
