// fichero 5813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5813;

Registro5813 crear_registro5813(int id) {
    Registro5813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5813(Registro5813 r) {
    return r.valor + r.id;
}
