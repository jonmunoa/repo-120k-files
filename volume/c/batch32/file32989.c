// fichero 32989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32989;

Registro32989 crear_registro32989(int id) {
    Registro32989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32989(Registro32989 r) {
    return r.valor + r.id;
}
