// fichero 17045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17045;

Registro17045 crear_registro17045(int id) {
    Registro17045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17045(Registro17045 r) {
    return r.valor + r.id;
}
