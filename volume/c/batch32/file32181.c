// fichero 32181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32181;

Registro32181 crear_registro32181(int id) {
    Registro32181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32181(Registro32181 r) {
    return r.valor + r.id;
}
