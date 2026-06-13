// fichero 16233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16233;

Registro16233 crear_registro16233(int id) {
    Registro16233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16233(Registro16233 r) {
    return r.valor + r.id;
}
