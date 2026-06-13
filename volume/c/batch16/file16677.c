// fichero 16677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16677;

Registro16677 crear_registro16677(int id) {
    Registro16677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16677(Registro16677 r) {
    return r.valor + r.id;
}
