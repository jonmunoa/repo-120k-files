// fichero 10337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10337;

Registro10337 crear_registro10337(int id) {
    Registro10337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10337(Registro10337 r) {
    return r.valor + r.id;
}
