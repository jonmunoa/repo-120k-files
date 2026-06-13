// fichero 4969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4969;

Registro4969 crear_registro4969(int id) {
    Registro4969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4969(Registro4969 r) {
    return r.valor + r.id;
}
