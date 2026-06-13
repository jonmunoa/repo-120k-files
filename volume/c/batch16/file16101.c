// fichero 16101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16101;

Registro16101 crear_registro16101(int id) {
    Registro16101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16101(Registro16101 r) {
    return r.valor + r.id;
}
