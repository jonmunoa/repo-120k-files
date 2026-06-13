// fichero 33029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33029;

Registro33029 crear_registro33029(int id) {
    Registro33029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33029(Registro33029 r) {
    return r.valor + r.id;
}
