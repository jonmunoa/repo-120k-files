// fichero 45437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45437;

Registro45437 crear_registro45437(int id) {
    Registro45437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45437(Registro45437 r) {
    return r.valor + r.id;
}
