// fichero 28029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28029;

Registro28029 crear_registro28029(int id) {
    Registro28029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28029(Registro28029 r) {
    return r.valor + r.id;
}
