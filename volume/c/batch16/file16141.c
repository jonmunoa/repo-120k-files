// fichero 16141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16141;

Registro16141 crear_registro16141(int id) {
    Registro16141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16141(Registro16141 r) {
    return r.valor + r.id;
}
