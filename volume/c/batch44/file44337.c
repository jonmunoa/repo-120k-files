// fichero 44337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44337;

Registro44337 crear_registro44337(int id) {
    Registro44337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44337(Registro44337 r) {
    return r.valor + r.id;
}
