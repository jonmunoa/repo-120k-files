// fichero 52461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52461;

Registro52461 crear_registro52461(int id) {
    Registro52461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52461(Registro52461 r) {
    return r.valor + r.id;
}
