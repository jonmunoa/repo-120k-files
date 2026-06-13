// fichero 15461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15461;

Registro15461 crear_registro15461(int id) {
    Registro15461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15461(Registro15461 r) {
    return r.valor + r.id;
}
