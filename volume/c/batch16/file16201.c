// fichero 16201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16201;

Registro16201 crear_registro16201(int id) {
    Registro16201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16201(Registro16201 r) {
    return r.valor + r.id;
}
