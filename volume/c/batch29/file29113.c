// fichero 29113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29113;

Registro29113 crear_registro29113(int id) {
    Registro29113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29113(Registro29113 r) {
    return r.valor + r.id;
}
