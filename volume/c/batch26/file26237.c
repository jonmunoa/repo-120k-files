// fichero 26237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26237;

Registro26237 crear_registro26237(int id) {
    Registro26237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26237(Registro26237 r) {
    return r.valor + r.id;
}
