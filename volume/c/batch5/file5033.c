// fichero 5033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5033;

Registro5033 crear_registro5033(int id) {
    Registro5033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5033(Registro5033 r) {
    return r.valor + r.id;
}
