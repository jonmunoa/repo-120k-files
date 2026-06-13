// fichero 32409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32409;

Registro32409 crear_registro32409(int id) {
    Registro32409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32409(Registro32409 r) {
    return r.valor + r.id;
}
