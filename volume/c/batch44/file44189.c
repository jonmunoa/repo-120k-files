// fichero 44189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44189;

Registro44189 crear_registro44189(int id) {
    Registro44189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44189(Registro44189 r) {
    return r.valor + r.id;
}
