// fichero 46605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46605;

Registro46605 crear_registro46605(int id) {
    Registro46605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46605(Registro46605 r) {
    return r.valor + r.id;
}
