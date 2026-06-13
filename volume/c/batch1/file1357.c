// fichero 1357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1357;

Registro1357 crear_registro1357(int id) {
    Registro1357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1357(Registro1357 r) {
    return r.valor + r.id;
}
