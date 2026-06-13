// fichero 16433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16433;

Registro16433 crear_registro16433(int id) {
    Registro16433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16433(Registro16433 r) {
    return r.valor + r.id;
}
