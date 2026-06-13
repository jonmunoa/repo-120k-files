// fichero 5337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5337;

Registro5337 crear_registro5337(int id) {
    Registro5337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5337(Registro5337 r) {
    return r.valor + r.id;
}
