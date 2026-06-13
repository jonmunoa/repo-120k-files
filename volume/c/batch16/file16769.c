// fichero 16769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16769;

Registro16769 crear_registro16769(int id) {
    Registro16769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16769(Registro16769 r) {
    return r.valor + r.id;
}
