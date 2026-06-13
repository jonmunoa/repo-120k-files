// fichero 16125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16125;

Registro16125 crear_registro16125(int id) {
    Registro16125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16125(Registro16125 r) {
    return r.valor + r.id;
}
