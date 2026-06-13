// fichero 7437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7437;

Registro7437 crear_registro7437(int id) {
    Registro7437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7437(Registro7437 r) {
    return r.valor + r.id;
}
