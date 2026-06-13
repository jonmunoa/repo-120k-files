// fichero 26125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26125;

Registro26125 crear_registro26125(int id) {
    Registro26125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26125(Registro26125 r) {
    return r.valor + r.id;
}
