// fichero 44937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44937;

Registro44937 crear_registro44937(int id) {
    Registro44937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44937(Registro44937 r) {
    return r.valor + r.id;
}
