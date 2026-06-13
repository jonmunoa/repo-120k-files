// fichero 46125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46125;

Registro46125 crear_registro46125(int id) {
    Registro46125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46125(Registro46125 r) {
    return r.valor + r.id;
}
