// fichero 32057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32057;

Registro32057 crear_registro32057(int id) {
    Registro32057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32057(Registro32057 r) {
    return r.valor + r.id;
}
