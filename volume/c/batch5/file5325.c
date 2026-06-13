// fichero 5325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5325;

Registro5325 crear_registro5325(int id) {
    Registro5325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5325(Registro5325 r) {
    return r.valor + r.id;
}
