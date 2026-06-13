// fichero 16537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16537;

Registro16537 crear_registro16537(int id) {
    Registro16537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16537(Registro16537 r) {
    return r.valor + r.id;
}
