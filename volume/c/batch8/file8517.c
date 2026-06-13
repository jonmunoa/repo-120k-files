// fichero 8517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8517;

Registro8517 crear_registro8517(int id) {
    Registro8517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8517(Registro8517 r) {
    return r.valor + r.id;
}
