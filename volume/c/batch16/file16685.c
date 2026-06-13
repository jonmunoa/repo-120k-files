// fichero 16685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16685;

Registro16685 crear_registro16685(int id) {
    Registro16685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16685(Registro16685 r) {
    return r.valor + r.id;
}
