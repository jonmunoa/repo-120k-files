// fichero 14565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14565;

Registro14565 crear_registro14565(int id) {
    Registro14565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14565(Registro14565 r) {
    return r.valor + r.id;
}
