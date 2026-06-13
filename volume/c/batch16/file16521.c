// fichero 16521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16521;

Registro16521 crear_registro16521(int id) {
    Registro16521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16521(Registro16521 r) {
    return r.valor + r.id;
}
