// fichero 16049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16049;

Registro16049 crear_registro16049(int id) {
    Registro16049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16049(Registro16049 r) {
    return r.valor + r.id;
}
