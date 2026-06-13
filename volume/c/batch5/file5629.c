// fichero 5629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5629;

Registro5629 crear_registro5629(int id) {
    Registro5629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5629(Registro5629 r) {
    return r.valor + r.id;
}
