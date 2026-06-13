// fichero 6237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6237;

Registro6237 crear_registro6237(int id) {
    Registro6237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6237(Registro6237 r) {
    return r.valor + r.id;
}
