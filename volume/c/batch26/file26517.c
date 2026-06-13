// fichero 26517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26517;

Registro26517 crear_registro26517(int id) {
    Registro26517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26517(Registro26517 r) {
    return r.valor + r.id;
}
