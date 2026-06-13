// fichero 43609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43609;

Registro43609 crear_registro43609(int id) {
    Registro43609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43609(Registro43609 r) {
    return r.valor + r.id;
}
