// fichero 45933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45933;

Registro45933 crear_registro45933(int id) {
    Registro45933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45933(Registro45933 r) {
    return r.valor + r.id;
}
