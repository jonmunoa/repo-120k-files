// fichero 43365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43365;

Registro43365 crear_registro43365(int id) {
    Registro43365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43365(Registro43365 r) {
    return r.valor + r.id;
}
