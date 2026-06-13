// fichero 1769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1769;

Registro1769 crear_registro1769(int id) {
    Registro1769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1769(Registro1769 r) {
    return r.valor + r.id;
}
