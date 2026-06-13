// fichero 32437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32437;

Registro32437 crear_registro32437(int id) {
    Registro32437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32437(Registro32437 r) {
    return r.valor + r.id;
}
