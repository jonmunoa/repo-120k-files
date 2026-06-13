// fichero 1033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1033;

Registro1033 crear_registro1033(int id) {
    Registro1033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1033(Registro1033 r) {
    return r.valor + r.id;
}
