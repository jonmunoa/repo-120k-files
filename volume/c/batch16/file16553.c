// fichero 16553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16553;

Registro16553 crear_registro16553(int id) {
    Registro16553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16553(Registro16553 r) {
    return r.valor + r.id;
}
