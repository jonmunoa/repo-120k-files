// fichero 6153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6153;

Registro6153 crear_registro6153(int id) {
    Registro6153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6153(Registro6153 r) {
    return r.valor + r.id;
}
